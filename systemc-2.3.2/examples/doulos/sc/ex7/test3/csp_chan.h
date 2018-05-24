
#ifndef CSP_CHAN_H
#define CSP_CHAN_H

#include "csp_chan_if.h"

// Point-to-point CSP channel - one writer, one reader
// Illustrates both static and dynamic design rule checks,
// static check via the register_port method
// dynamic check via method check_writer, which calls sc_get_curr_process_handle()

template <class T>
class csp_chan: public sc_prim_channel,
public csp_out_if<T>,
public csp_in_if<T>
{

  public:

    explicit csp_chan(const char* _name )
    : sc_prim_channel(_name), outflag(false), outcount(0), incount(0),
      m_writer(0), m_reader(0) {}

    virtual void out(const T& d)
    {
      check_writer();
      outflag = true;
      data = d;
      out_ev.notify();
      wait (in_ev);
      outflag = false;
      out_ev.notify();
      wait (in_ev);
    }

    virtual const T& in()
    {
      check_reader();
      if (!outflag)
        wait (out_ev);
      in_ev.notify();
      T& d = data;
      transfer_ev.notify();
      wait (out_ev);
      in_ev.notify();
      return d;
    }

    void check_writer()
    {
      // dynamic design rule check

      sc_object* writer = sc_get_current_process_handle().get_process_object();
      if (m_writer == 0)
      {
        m_writer = writer;
      }
      else if (m_writer != writer )
      {
        cout << "Multiple writers error:" << endl;
        cout << "  csp_chan " << name() << "(" << kind() << ")" << endl;
        cout << "  first driver " << m_writer->name() << endl;
        cout << "  second driver " << writer->name() << endl;
      }
    }

    void check_reader()
    {
      // dynamic design rule check

      sc_object* reader = sc_get_current_process_handle().get_process_object();
      if (m_reader == 0)
      {
        m_reader = reader;
      }
      else if (m_reader != reader )
      {
        cout << "Multiple readers error:" << endl;
        cout << "  csp_chan " << name() << "(" << kind() << ")" << endl;
        cout << "  first reader " << m_reader->name() << endl;
        cout << "  second reader " << reader->name() << endl;
      }
    }

    virtual const sc_event& default_event() const { return transfer_ev; }

    virtual void register_port (sc_port_base& port_,
                                const char*    if_typename_ )
    {
      std::string nm(if_typename_);
      if (nm == typeid(csp_out_if<T>).name())
        ++ outcount;
      else if (nm == typeid(csp_in_if<T>).name())
        ++ incount;
    }

    virtual void end_of_elaboration()
    {
      if (outcount != 1)
        cout << "Error: channel " << name() << " has " << outcount << " writers" << endl;
      if (incount != 1)
        cout << "Error: channel " << name() << " has " << outcount << " readers" << endl;
      sc_assert( (outcount == 1) && (incount == 1) );
    }

    // For the exclusive use of sc_trace and operator<<
    const T& get_data_ref() const { return data; }

  private:
    T           data;
    bool        outflag;
    sc_event    out_ev, in_ev;
    sc_event    transfer_ev;          // the default event
    int         outcount, incount;    // used for static design rule checking
    sc_object*  m_writer;             // used for dynamic design rule checking
    sc_object*  m_reader;
};

template<class T>
void sc_trace(sc_trace_file *tf, csp_chan<T> &ch, const std::string &_name)
{
  sc_trace(tf, ch.get_data_ref(), _name.c_str());
}

template<class T>
std::ostream& operator<< (std::ostream &os, csp_chan<T> &ch)
{
  return os << ch.get_data_ref();
}

#endif
