(PY27) cwm@flxsa02:~/git/git.c-w-m/sc/ext/gs/i7-pcie$ make
Scanning dependencies of target greenreg
[  2%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/greenreg.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/core/gc_globals.h:46:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/core/gc_core.h:64,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:41,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/greenreg.h:45,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/greenreg.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/include/greenlib/gs_sc_api_detection.h:71:2: error: #error The SYSTEMC_API macro is not set and could not be detected. Please, see the source code sc_api_detection.h for more information.
 #error The SYSTEMC_API macro is not set and could not be detected. Please, \
  ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/greenreg.h:45,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/greenreg.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greensocket/include/greensocket/generic/green_socket_extension_support_base.h:144:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greensocket/include/greensocket/generic/green_socket_bind_checker.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greensocket/include/greensocket/initiator/green_initiator_socket_base.h:28,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greensocket/include/greensocket/initiator/single_socket.h:26,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:29,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/greenreg.h:45,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/greenreg.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greensocket/include/greensocket/generic/green_socket_extension_support_base.tpp: In static member function ‘static T* gs::socket::extension_support_base<TRAITS>::get_extension(const gs::ext::gs_data_id&, gs::socket::extension_support_base<TRAITS>::payload_type&)’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greensocket/include/greensocket/generic/green_socket_extension_support_base.tpp:127:29: error: expected primary-expression before ‘>’ token
   T* tmp=txn.get_extension<T>(); //get the pointer
                             ^
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greensocket/include/greensocket/generic/green_socket_extension_support_base.tpp:127:31: error: expected primary-expression before ‘)’ token
   T* tmp=txn.get_extension<T>(); //get the pointer
                               ^
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/greenreg.h:45,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/greenreg.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/cnf_api_if.h: At global scope:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/cnf_api_if.h:237:65: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   virtual sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) = 0;
                                                                 ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/cnf_api_if.h:325:40: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   virtual sc_event& getNewParamEvent() throw (RegisterObserverFailedException) = 0;
                                        ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:56:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/greenreg.h:45,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/greenreg.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_private_Api/gcnf_private_api_t.h:29:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/greenreg.h:45,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/greenreg.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_private_Api/gcnf_private_plugin.h:47:33: error: declaration of template parameter ‘T’ shadows template parameter
   template<typename T, template<class T> class gs_param_T, typename ConfigPlugin_T> class GCnf_private_Api_T;
                                 ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_private_Api/gcnf_private_plugin.h:47:12: note: template parameter ‘T’ declared here
   template<typename T, template<class T> class gs_param_T, typename ConfigPlugin_T> class GCnf_private_Api_T;
            ^~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/greenreg.h:45,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/greenreg.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_private_Api/gcnf_private_api_t.h:486:59: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
     sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                           ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_private_Api/gcnf_private_api_t.h:506:34: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
     sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                  ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/gs_param/gs_param_class.h:33:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:71,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/greenreg.h:45,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/greenreg.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/gs_param/gs_param_native.hpp: In member function ‘gs::cnf::gs_param<bool>::my_type& gs::cnf::gs_param<bool>::operator++()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/gs_param/gs_param_operator_macros.h:79:7: warning: use of an operand of type ‘bool’ in ‘operator++’ is deprecated [-Wdeprecated]
     ++tmp_val;                                                       \
       ^
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/gs_param/gs_param_native.hpp:261:3: note: in expansion of macro ‘GC_SPECIALISATIONS_INCREMENT_OPERATORS’
   GC_SPECIALISATIONS_INCREMENT_OPERATORS;
   ^
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/gs_param/gs_param_native.hpp: In member function ‘gs::cnf::gs_param<bool>::val_type gs::cnf::gs_param<bool>::operator++(int)’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/gs_param/gs_param_operator_macros.h:89:16: warning: use of an operand of type ‘bool’ in ‘operator++’ is deprecated [-Wdeprecated]
     tmp_set_val++;                                                   \
                ^
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/gs_param/gs_param_native.hpp:261:3: note: in expansion of macro ‘GC_SPECIALISATIONS_INCREMENT_OPERATORS’
   GC_SPECIALISATIONS_INCREMENT_OPERATORS;
   ^
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/gs_param/gs_param_class.h:288:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:71,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/greenreg.h:45,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/greenreg.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/gs_param/gs_param_array.hpp: In member function ‘gs::cnf::gs_param<T*>::my_type& gs::cnf::gs_param<T*>::operator=(const my_type&)’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/gs_param/gs_param_array.hpp:297:7: error: return-statement with no value, in function returning ‘gs::cnf::gs_param<T*>::my_type&’ [-fpermissive]
       return;
       ^~~~~~
libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/build.make:62: recipe for target 'libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/greenreg.cpp.o' failed
make[2]: *** [libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/greenreg.cpp.o] Error 1
CMakeFiles/Makefile2:1766: recipe for target 'libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/all' failed
make[1]: *** [libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/all] Error 2
Makefile:151: recipe for target 'all' failed
make: *** [all] Error 2
(PY27) cwm@flxsa02:~/git/git.c-w-m/sc/ext/gs/i7-pcie$ 
