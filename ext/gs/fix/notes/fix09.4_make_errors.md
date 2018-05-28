# Make with Errors
----
## Set Environment Variables and run CMake
```
$ source activate PY27
(PY27) $ mkdir build
(PY27) $ export PYTHON_INCLUDE_DIR=~/anaconda2/envs/PY27/include/python2.7
(PY27) $ export PYTHON_LIBRARY=~/anaconda2/envs/PY27/lib/libpython2.7.so
(PY27) $ export ARFLAGS="rv"
(PY27) $ cmake -DCMAKE_INSTALL_PREFIX=build -DSYSTEMC_PREFIX=~/git/git.c-w-m/sc/systemc-2.3.2/
```
----
## Make
```
(PY27) $ make
Scanning dependencies of target greenreg
[  2%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/greenreg.cpp.o
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
[  4%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/greenreg_socket/greenreg_socket.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/greenreg.h:45,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/greenreg_socket/gr_gsgpsocket.h:38,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/greenreg_socket/greenreg_socket.h:49,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/greenreg_socket.h:2,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/greenreg_socket/greenreg_socket.cpp:29:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/greenreg.h:45,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/greenreg_socket/gr_gsgpsocket.h:38,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/greenreg_socket/greenreg_socket.h:49,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/greenreg_socket.h:2,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/greenreg_socket/greenreg_socket.cpp:29:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/greenreg_socket/gr_gsgpsocket.h:38,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/greenreg_socket/greenreg_socket.h:49,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/greenreg_socket.h:2,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/greenreg_socket/greenreg_socket.cpp:29:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/greenreg.h:45,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/greenreg_socket/gr_gsgpsocket.h:38,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/greenreg_socket/greenreg_socket.h:49,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/greenreg_socket.h:2,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/greenreg_socket/greenreg_socket.cpp:29:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/greenreg_socket/gr_gsgpsocket.h:38,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/greenreg_socket/greenreg_socket.h:49,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/greenreg_socket.h:2,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/greenreg_socket/greenreg_socket.cpp:29:
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
[  4%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/framework/core/I_gr_dump.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/core/I_gr_dump.cpp:39:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/core/I_gr_dump.cpp:39:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/core/I_gr_dump.cpp:39:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/core/I_gr_dump.cpp:39:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/core/I_gr_dump.cpp:39:
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
[  6%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/framework/core/I_gr_config.cpp.o
[  6%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/framework/core/gr_object.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_object.h:42,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/core/gr_object.cpp:39:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_object.h:42,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/core/gr_object.cpp:39:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_object.h:42,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/core/gr_object.cpp:39:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_object.h:42,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/core/gr_object.cpp:39:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_object.h:42,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/core/gr_object.cpp:39:
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
[  8%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/framework/core/gr_dumper.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_dumper.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/core/gr_dumper.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_dumper.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/core/gr_dumper.cpp:35:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_dumper.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/core/gr_dumper.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_dumper.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/core/gr_dumper.cpp:35:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_dumper.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/core/gr_dumper.cpp:35:
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
[ 10%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/framework/core/gr_common.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/core/gr_common.cpp:38:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/core/gr_common.cpp:38:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/core/gr_common.cpp:38:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/core/gr_common.cpp:38:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/core/gr_common.cpp:38:
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
[ 10%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/framework/core/gr_module.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_module.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/core/gr_module.cpp:39:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_module.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/core/gr_module.cpp:39:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_module.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/core/gr_module.cpp:39:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_module.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/core/gr_module.cpp:39:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_module.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/core/gr_module.cpp:39:
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
[ 12%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/framework/devices/gr_device_container.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/device/device_container.h:45,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/devices/gr_device_container.h:38,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/devices/gr_device_container.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/device/device_container.h:45,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/devices/gr_device_container.h:38,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/devices/gr_device_container.cpp:35:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/device/device_container.h:45,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/devices/gr_device_container.h:38,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/devices/gr_device_container.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/device/device_container.h:45,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/devices/gr_device_container.h:38,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/devices/gr_device_container.cpp:35:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/device/device_container.h:45,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/devices/gr_device_container.h:38,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/devices/gr_device_container.cpp:35:
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
[ 12%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/framework/registers/gr_register_container.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/register_container.h:50,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/registers/gr_register_container.h:45,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/registers/gr_register_container.cpp:40:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/register_container.h:50,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/registers/gr_register_container.h:45,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/registers/gr_register_container.cpp:40:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/register_container.h:50,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/registers/gr_register_container.h:45,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/registers/gr_register_container.cpp:40:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/register_container.h:50,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/registers/gr_register_container.h:45,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/registers/gr_register_container.cpp:40:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/register_container.h:50,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/registers/gr_register_container.h:45,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/registers/gr_register_container.cpp:40:
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
[ 14%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/framework/registers/gr_register_splitio.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/register.h:51,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/registers/gr_register_splitio.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/registers/gr_register_splitio.cpp:39:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/register.h:51,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/registers/gr_register_splitio.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/registers/gr_register_splitio.cpp:39:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/register.h:51,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/registers/gr_register_splitio.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/registers/gr_register_splitio.cpp:39:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/register.h:51,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/registers/gr_register_splitio.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/registers/gr_register_splitio.cpp:39:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/register.h:51,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/registers/gr_register_splitio.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/registers/gr_register_splitio.cpp:39:
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
[ 14%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/framework/registers/gr_register_sharedio.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/register.h:51,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/registers/gr_register_sharedio.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/registers/gr_register_sharedio.cpp:39:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/register.h:51,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/registers/gr_register_sharedio.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/registers/gr_register_sharedio.cpp:39:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/register.h:51,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/registers/gr_register_sharedio.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/registers/gr_register_sharedio.cpp:39:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/register.h:51,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/registers/gr_register_sharedio.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/registers/gr_register_sharedio.cpp:39:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/register.h:51,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/registers/gr_register_sharedio.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/registers/gr_register_sharedio.cpp:39:
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
[ 16%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/framework/registers/gr_register_container_reference_container.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/registers/gr_register_container_reference_container.h:42,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/registers/gr_register_container_reference_container.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/registers/gr_register_container_reference_container.h:42,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/registers/gr_register_container_reference_container.cpp:35:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/registers/gr_register_container_reference_container.h:42,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/registers/gr_register_container_reference_container.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/registers/gr_register_container_reference_container.h:42,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/registers/gr_register_container_reference_container.cpp:35:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/registers/gr_register_container_reference_container.h:42,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/framework/registers/gr_register_container_reference_container.cpp:35:
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
[ 18%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/utils/stl_ext/file_stream_tokenizer.cpp.o
[ 18%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/utils/stl_ext/base_types.cpp.o
[ 20%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/utils/stl_ext/commandline_args.cpp.o
[ 20%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/utils/stl_ext/string_utils.cpp.o
[ 22%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/utils/storage/dynamic_classtype_enumeration.cpp.o
[ 22%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/utils/storage/data_store_array.cpp.o
[ 24%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/utils/storage/data_container.cpp.o
[ 26%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/utils/storage/option_list.cpp.o
[ 26%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/utils/storage/I_addressable_container.cpp.o
[ 28%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/utils/storage/access_data_container.cpp.o
[ 28%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/utils/storage/addressable_container.cpp.o
[ 30%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/utils/storage/composite_reference_container.cpp.o
[ 32%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/utils/storage/lookup_table.cpp.o
[ 32%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/utils/storage/addressable_owning_container.cpp.o
[ 34%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/utils/storage/ext_map.cpp.o
[ 34%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/utils/storage/composite_container.cpp.o
[ 36%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/utils/storage/data_store_accessor.cpp.o
[ 36%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/gr_externs.cpp.o
[ 38%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/sysc_ext/kernel/gr_event.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_event.h:52,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_event.cpp:43:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_event.h:52,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_event.cpp:43:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_event.h:52,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_event.cpp:43:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_event.h:52,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_event.cpp:43:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_event.h:52,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_event.cpp:43:
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
[ 40%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/sysc_ext/kernel/gr_notification_rules.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_event.h:52,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/I_notification_rule.h:43,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_notification_rules.h:41,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_notification_rules.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_event.h:52,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/I_notification_rule.h:43,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_notification_rules.h:41,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_notification_rules.cpp:35:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_event.h:52,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/I_notification_rule.h:43,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_notification_rules.h:41,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_notification_rules.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_event.h:52,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/I_notification_rule.h:43,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_notification_rules.h:41,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_notification_rules.cpp:35:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_event.h:52,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/I_notification_rule.h:43,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_notification_rules.h:41,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_notification_rules.cpp:35:
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
[ 40%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/sysc_ext/kernel/gr_attribute.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_attribute.h:57,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_attribute.cpp:45:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_attribute.h:57,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_attribute.cpp:45:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_attribute.h:57,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_attribute.cpp:45:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_attribute.h:57,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_attribute.cpp:45:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_attribute.h:57,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_attribute.cpp:45:
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
[ 42%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/sysc_ext/kernel/gr_sc_sensitive.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_module.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_sc_sensitive.cpp:42:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_module.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_sc_sensitive.cpp:42:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_module.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_sc_sensitive.cpp:42:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_module.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_sc_sensitive.cpp:42:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_module.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_sc_sensitive.cpp:42:
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
[ 42%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/sysc_ext/kernel/gr_switch_container.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_attribute.h:57,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_switch.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_switch_container.h:43,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_switch_container.cpp:40:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_attribute.h:57,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_switch.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_switch_container.h:43,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_switch_container.cpp:40:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_attribute.h:57,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_switch.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_switch_container.h:43,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_switch_container.cpp:40:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_attribute.h:57,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_switch.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_switch_container.h:43,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_switch_container.cpp:40:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_attribute.h:57,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_switch.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_switch_container.h:43,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_switch_container.cpp:40:
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
[ 44%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/sysc_ext/kernel/gr_attribute_type_container.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_object.h:42,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_attribute_base.h:49,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_attribute_type_container.h:43,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_attribute_type_container.cpp:42:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_object.h:42,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_attribute_base.h:49,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_attribute_type_container.h:43,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_attribute_type_container.cpp:42:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_object.h:42,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_attribute_base.h:49,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_attribute_type_container.h:43,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_attribute_type_container.cpp:42:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_object.h:42,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_attribute_base.h:49,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_attribute_type_container.h:43,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_attribute_type_container.cpp:42:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_object.h:42,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_attribute_base.h:49,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_attribute_type_container.h:43,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_attribute_type_container.cpp:42:
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
[ 46%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/sysc_ext/kernel/I_gr_component.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_module.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/I_gr_component.h:38,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/I_gr_component.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_module.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/I_gr_component.h:38,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/I_gr_component.cpp:35:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_module.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/I_gr_component.h:38,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/I_gr_component.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_module.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/I_gr_component.h:38,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/I_gr_component.cpp:35:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_module.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/I_gr_component.h:38,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/I_gr_component.cpp:35:
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
[ 46%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/sysc_ext/kernel/gr_switch.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_attribute.h:57,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_switch.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_switch.cpp:43:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_attribute.h:57,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_switch.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_switch.cpp:43:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_attribute.h:57,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_switch.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_switch.cpp:43:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_attribute.h:57,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_switch.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_switch.cpp:43:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_attribute.h:57,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_switch.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_switch.cpp:43:
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
[ 48%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/sysc_ext/kernel/gr_notification_rule_container.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_notification_rule_container.h:52,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_notification_rule_container.cpp:42:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_notification_rule_container.h:52,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_notification_rule_container.cpp:42:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_notification_rule_container.h:52,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_notification_rule_container.cpp:42:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_notification_rule_container.h:52,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_notification_rule_container.cpp:42:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_notification_rule_container.h:52,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_notification_rule_container.cpp:42:
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
[ 48%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/sysc_ext/kernel/gr_component.cpp.o
[ 50%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/sysc_ext/kernel/gr_attribute_base.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_object.h:42,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_attribute_base.h:49,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_attribute_base.cpp:43:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_object.h:42,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_attribute_base.h:49,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_attribute_base.cpp:43:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_object.h:42,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_attribute_base.h:49,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_attribute_base.cpp:43:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_object.h:42,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_attribute_base.h:49,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_attribute_base.cpp:43:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_object.h:42,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_attribute_base.h:49,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_attribute_base.cpp:43:
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
[ 50%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/sysc_ext/kernel/gr_component_container.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_module.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/I_gr_component.h:38,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_component_container.h:38,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_component_container.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_module.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/I_gr_component.h:38,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_component_container.h:38,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_component_container.cpp:35:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_module.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/I_gr_component.h:38,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_component_container.h:38,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_component_container.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_module.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/I_gr_component.h:38,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_component_container.h:38,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_component_container.cpp:35:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_module.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/I_gr_component.h:38,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_component_container.h:38,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/sysc_ext/kernel/gr_component_container.cpp:35:
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
[ 52%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/internal/device/device_container.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/device/device_container.h:45,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/device/device_container.cpp:38:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/device/device_container.h:45,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/device/device_container.cpp:38:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/device/device_container.h:45,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/device/device_container.cpp:38:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/device/device_container.h:45,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/device/device_container.cpp:38:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/device/device_container.h:45,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/device/device_container.cpp:38:
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
[ 54%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/internal/device/I_device_container.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/device/I_device_container.h:42,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/device/I_device_container.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/device/I_device_container.h:42,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/device/I_device_container.cpp:35:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/device/I_device_container.h:42,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/device/I_device_container.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/device/I_device_container.h:42,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/device/I_device_container.cpp:35:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/device/I_device_container.h:42,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/device/I_device_container.cpp:35:
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
[ 54%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/internal/device/I_device.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_module.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/device/I_device.h:42,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/device/I_device.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_module.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/device/I_device.h:42,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/device/I_device.cpp:35:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_module.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/device/I_device.h:42,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/device/I_device.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_module.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/device/I_device.h:42,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/device/I_device.cpp:35:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_module.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/device/I_device.h:42,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/device/I_device.cpp:35:
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
[ 56%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/internal/device/subdevice_container.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/device/subdevice_container.h:45,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/device/subdevice_container.cpp:38:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/device/subdevice_container.h:45,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/device/subdevice_container.cpp:38:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/device/subdevice_container.h:45,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/device/subdevice_container.cpp:38:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/device/subdevice_container.h:45,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/device/subdevice_container.cpp:38:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/device/subdevice_container.h:45,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/device/subdevice_container.cpp:38:
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
[ 56%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/internal/device/subdevice.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/device/subdevice.h:47,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/device/subdevice.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/device/subdevice.h:47,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/device/subdevice.cpp:35:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/device/subdevice.h:47,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/device/subdevice.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/device/subdevice.h:47,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/device/subdevice.cpp:35:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/device/subdevice.h:47,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/device/subdevice.cpp:35:
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
[ 58%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/internal/device/device.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/device/device.h:42,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/device/device.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/device/device.h:42,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/device/device.cpp:35:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/device/device.h:42,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/device/device.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/device/device.h:42,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/device/device.cpp:35:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/device/device.h:42,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/device/device.cpp:35:
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
[ 60%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/internal/registers/bit/bit_accessor.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit/bit_accessor.cpp:37:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit/bit_accessor.cpp:37:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit/bit_accessor.cpp:37:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit/bit_accessor.cpp:37:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit/bit_accessor.cpp:37:
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
[ 60%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/internal/registers/bit/bit_data.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register_data/I_register_data.h:39,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit/bit_data.cpp:37:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register_data/I_register_data.h:39,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit/bit_data.cpp:37:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register_data/I_register_data.h:39,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit/bit_data.cpp:37:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register_data/I_register_data.h:39,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit/bit_data.cpp:37:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register_data/I_register_data.h:39,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit/bit_data.cpp:37:
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
[ 62%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/internal/registers/bit/splitio_bit.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit/bit.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit/splitio_bit.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit/splitio_bit.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit/bit.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit/splitio_bit.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit/splitio_bit.cpp:35:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit/bit.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit/splitio_bit.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit/splitio_bit.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit/bit.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit/splitio_bit.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit/splitio_bit.cpp:35:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit/bit.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit/splitio_bit.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit/splitio_bit.cpp:35:
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
[ 62%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/internal/registers/bit/sharedio_bit.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit/bit.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit/sharedio_bit.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit/sharedio_bit.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit/bit.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit/sharedio_bit.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit/sharedio_bit.cpp:35:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit/bit.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit/sharedio_bit.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit/sharedio_bit.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit/bit.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit/sharedio_bit.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit/sharedio_bit.cpp:35:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit/bit.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit/sharedio_bit.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit/sharedio_bit.cpp:35:
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
[ 64%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/internal/registers/register_data/primary_register_data.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register_data/I_register_data.h:39,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register_data/primary_register_data.h:43,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/register_data/primary_register_data.cpp:39:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register_data/I_register_data.h:39,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register_data/primary_register_data.h:43,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/register_data/primary_register_data.cpp:39:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register_data/I_register_data.h:39,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register_data/primary_register_data.h:43,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/register_data/primary_register_data.cpp:39:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register_data/I_register_data.h:39,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register_data/primary_register_data.h:43,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/register_data/primary_register_data.cpp:39:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register_data/I_register_data.h:39,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register_data/primary_register_data.h:43,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/register_data/primary_register_data.cpp:39:
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
[ 64%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/internal/registers/register_data/standard_register_data.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register_data/I_register_data.h:39,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register_data/standard_register_data.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/register_data/standard_register_data.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register_data/I_register_data.h:39,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register_data/standard_register_data.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/register_data/standard_register_data.cpp:35:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register_data/I_register_data.h:39,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register_data/standard_register_data.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/register_data/standard_register_data.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register_data/I_register_data.h:39,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register_data/standard_register_data.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/register_data/standard_register_data.cpp:35:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register_data/I_register_data.h:39,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register_data/standard_register_data.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/register_data/standard_register_data.cpp:35:
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
[ 66%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/internal/registers/register_compile_test.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit/bit.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/register_compile_test.cpp:39:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit/bit.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/register_compile_test.cpp:39:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit/bit.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/register_compile_test.cpp:39:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit/bit.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/register_compile_test.cpp:39:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit/bit.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/register_compile_test.cpp:39:
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
[ 68%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/internal/registers/bit_range/sharedio_bit_range.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit_range/bit_range.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit_range/sharedio_bit_range.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit_range/sharedio_bit_range.cpp:38:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit_range/bit_range.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit_range/sharedio_bit_range.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit_range/sharedio_bit_range.cpp:38:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit_range/bit_range.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit_range/sharedio_bit_range.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit_range/sharedio_bit_range.cpp:38:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit_range/bit_range.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit_range/sharedio_bit_range.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit_range/sharedio_bit_range.cpp:38:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit_range/bit_range.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit_range/sharedio_bit_range.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit_range/sharedio_bit_range.cpp:38:
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
[ 68%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/internal/registers/bit_range/bit_range.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit_range/bit_range.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit_range/bit_range.cpp:39:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit_range/bit_range.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit_range/bit_range.cpp:39:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit_range/bit_range.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit_range/bit_range.cpp:39:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit_range/bit_range.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit_range/bit_range.cpp:39:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit_range/bit_range.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit_range/bit_range.cpp:39:
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
[ 70%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/internal/registers/bit_range/bit_range_accessor.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit_range/bit_range_accessor.h:45,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit_range/bit_range_accessor.cpp:39:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit_range/bit_range_accessor.h:45,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit_range/bit_range_accessor.cpp:39:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit_range/bit_range_accessor.h:45,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit_range/bit_range_accessor.cpp:39:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit_range/bit_range_accessor.h:45,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit_range/bit_range_accessor.cpp:39:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit_range/bit_range_accessor.h:45,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit_range/bit_range_accessor.cpp:39:
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
[ 70%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/internal/registers/bit_range/splitio_bit_range.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit_range/bit_range.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit_range/splitio_bit_range.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit_range/splitio_bit_range.cpp:39:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit_range/bit_range.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit_range/splitio_bit_range.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit_range/splitio_bit_range.cpp:39:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit_range/bit_range.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit_range/splitio_bit_range.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit_range/splitio_bit_range.cpp:39:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit_range/bit_range.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit_range/splitio_bit_range.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit_range/splitio_bit_range.cpp:39:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit_range/bit_range.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit_range/splitio_bit_range.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit_range/splitio_bit_range.cpp:39:
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
[ 72%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/internal/registers/bit_range/bit_range_bit_accessor.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit/bit.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit_range/bit_range_bit_accessor.cpp:38:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit/bit.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit_range/bit_range_bit_accessor.cpp:38:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit/bit.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit_range/bit_range_bit_accessor.cpp:38:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit/bit.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit_range/bit_range_bit_accessor.cpp:38:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit/bit.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit_range/bit_range_bit_accessor.cpp:38:
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
[ 72%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/internal/registers/bit_range/bit_range_data.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_notification_rule_container.h:52,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit_range/bit_range_data.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit_range/bit_range_data.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_notification_rule_container.h:52,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit_range/bit_range_data.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit_range/bit_range_data.cpp:35:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_notification_rule_container.h:52,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit_range/bit_range_data.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit_range/bit_range_data.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_notification_rule_container.h:52,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit_range/bit_range_data.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit_range/bit_range_data.cpp:35:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/sysc_ext/kernel/gr_notification_rule_container.h:52,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/bit_range/bit_range_data.h:40,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/bit_range/bit_range_data.cpp:35:
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
[ 74%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/internal/registers/register/register.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/register.h:51,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/register/register.cpp:39:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/register.h:51,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/register/register.cpp:39:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/register.h:51,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/register/register.cpp:39:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/register.h:51,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/register/register.cpp:39:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/register.h:51,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/register/register.cpp:39:
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
[ 76%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/internal/registers/register/I_register.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/register/I_register.cpp:44:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/register/I_register.cpp:44:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/register/I_register.cpp:44:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/register/I_register.cpp:44:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/I_register.h:48,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/register/I_register.cpp:44:
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
[ 76%] Building CXX object libs/greenlib/greenreg/lib/CMakeFiles/greenreg.dir/__/src/internal/registers/register/register_container.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/generic_transaction.h:24:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:32,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/register_container.h:50,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/register/register_container.cpp:42:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h: In destructor ‘gs::GSDataType::GSDataData::~GSDataData()’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:234:7: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
       if (own_array)
       ^~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/../core/attributes.h:235:29: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
         delete[] own_array; own_array = NULL;
                             ^~~~~~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/register_container.h:50,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/register/register_container.cpp:42:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/register_container.h:50,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/register/register_container.cpp:42:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/gr_common.h:53,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/register_container.h:50,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/register/register_container.cpp:42:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/framework/core/I_gr_dump.h:44,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/include/greenreg/internal/registers/register/register_container.h:50,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenreg/src/internal/registers/register/register_container.cpp:42:
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
[ 78%] Linking CXX static library libgreenreg.a
[ 78%] Built target greenreg
Scanning dependencies of target qemu_sc
[ 80%] Creating directories for 'qemu_sc'
[ 80%] No download step for 'qemu_sc'
[ 82%] No update step for 'qemu_sc'
[ 82%] No force-build step for 'qemu_sc'
[ 84%] No patch step for 'qemu_sc'
[ 84%] Performing configure step for 'qemu_sc'
Install prefix    /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc.build
BIOS directory    /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc.build/share/qemu
binary directory  /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc.build/bin
library directory /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc.build/lib
libexec directory /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc.build/libexec
include directory /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc.build/include
config directory  /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc.build/etc
local state directory   /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc.build/var
Manual directory  /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc.build/share/man
ELF interp prefix /usr/gnemul/qemu-%M
Source path       /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc
C compiler        cc
Host C compiler   cc
Objective-C compiler cc
CFLAGS            -O2 -D_FORTIFY_SOURCE=2 -g 
QEMU_CFLAGS       -m64 -D_GNU_SOURCE -D_FILE_OFFSET_BITS=64 -D_LARGEFILE_SOURCE -Wstrict-prototypes -Wredundant-decls -Wall -Wundef -Wwrite-strings -Wmissing-prototypes -fno-strict-aliasing -fPIC -fpic -ftls-model=initial-exec  -fstack-protector-all -Wendif-labels -Wmissing-include-dirs -Wempty-body -Wnested-externs -Wformat-security -Wformat-y2k -Winit-self -Wignored-qualifiers -Wold-style-declaration -Wold-style-definition -Wtype-limits  -I/usr/include/libpng12 -I/usr/include/pixman-1 -I$(SRC_PATH)/dtc/libfdt
LDFLAGS           -Wl,--warn-common -m64 -g 
make              make
install           install
python            python
smbd              /usr/sbin/smbd
host CPU          x86_64
host big endian   no
target list       x86_64-softmmu
tcg debug enabled no
gprof enabled     no
sparse enabled    no
strip binaries    yes
profiler          no
static build      no
-Werror enabled   no
pixman            system
SDL support       yes
GTK support       no
curses support    yes
curl support      yes
mingw32 support   no
Audio drivers     oss
Extra audio cards ac97 es1370 sb16 hda
Block whitelist   
Mixer emulation   no
VirtFS support    no
VNC support       yes
VNC TLS support   no
VNC SASL support  no
VNC JPEG support  yes
VNC PNG support   yes
VNC WS support    no
xen support       no
brlapi support    no
bluez  support    no
Documentation     yes
NPTL support      yes
GUEST_BASE        yes
PIE               no
vde support       no
Linux AIO support no
ATTR/XATTR support yes
Install blobs     yes
KVM support       yes
TCG interpreter   no
fdt support       yes
preadv support    yes
fdatasync         yes
madvise           yes
posix_madvise     yes
sigev_thread_id   yes
uuid support      yes
libcap-ng support no
vhost-net support yes
Trace backend     nop
Trace output file trace-<pid>
spice support     no (/)
rbd support       no
xfsctl support    no
nss used          no
libusb            no
usb net redir     no
GLX support       yes
libiscsi support  no
build guest agent yes
seccomp support   no
coroutine backend ucontext
GlusterFS support no
virtio-blk-data-plane no
systemc   yes
greensocs prefix  /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib
systemc prefix    /home/cwm/git/git.c-w-m/sc/systemc-2.3.2/include/..
tlm prefix        /home/cwm/git/git.c-w-m/sc/systemc-2.3.2/include/..
pciesocket prefix /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/pciesocket
gcov              gcov
gcov enabled      no
TPM support       no
libssh2 support   no
TPM passthrough   no
[ 86%] Performing build step for 'qemu_sc'
  GEN   x86_64-softmmu/config-devices.mak
  GEN   config-all-devices.mak
  GEN   config-host.h
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/dumptrees.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/trees.S
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/testutils.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/value-labels.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/asm_tree_dump.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/truncated_property.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/path_offset_aliases.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/add_subnode_with_nops.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/dtbs_equal_unordered.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/dtb_reverse.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/dtbs_equal_ordered.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/extra-terminating-null.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/incbin.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/boot-cpuid.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/phandle_format.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/path-references.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/references.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/string_escapes.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/del_node.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/del_property.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/setprop.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/set_name.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/rw_tree1.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/open_pack.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/nopulate.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/mangle-layout.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/move_and_save.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/sw_tree1.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/nop_node.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/nop_property.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/setprop_inplace.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/notfound.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/get_alias.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/node_offset_by_compatible.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/node_check_compatible.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/node_offset_by_phandle.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/node_offset_by_prop_value.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/parent_offset.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/supernode_atdepth_offset.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/get_path.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/get_phandle.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/getprop.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/get_name.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/path_offset.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/subnode_offset.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/find_property.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/root_node.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/tests/get_mem_rsv.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/libfdt/fdt_strerror.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/libfdt/fdt_rw.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/libfdt/fdt_sw.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/libfdt/fdt_wip.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/libfdt/fdt_ro.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/libfdt/fdt.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/ftdump.c
	 LEX convert-dtsv0-lexer.lex.c
	 DEP convert-dtsv0-lexer.lex.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/util.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/srcpos.c
	 BISON dtc-parser.tab.c
	 DEP dtc-parser.tab.c
	 LEX dtc-lexer.lex.c
	 DEP dtc-lexer.lex.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/treesource.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/livetree.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/fstree.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/flattree.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/dtc.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/data.c
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/checks.c
fatal: Not a git repository: /home/cwm/git/git.c-w-m/sc/ext/gs/fix/i7-pcie/.git/modules/libs/qemu_sc/modules/dtc
	CHK version_gen.h
	UPD version_gen.h
	 DEP /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/dtc/dtc.c
	 CC libfdt/fdt.o
	 CC libfdt/fdt_ro.o
	 CC libfdt/fdt_wip.o
	 CC libfdt/fdt_sw.o
	 CC libfdt/fdt_rw.o
	 CC libfdt/fdt_strerror.o
	 AR libfdt/libfdt.a
ar: creating libfdt/libfdt.a
a - libfdt/fdt.o
a - libfdt/fdt_ro.o
a - libfdt/fdt_wip.o
a - libfdt/fdt_sw.o
a - libfdt/fdt_rw.o
a - libfdt/fdt_strerror.o
	 LD libfdt/libfdt-1.3.0.so
  GEN   qemu-options.def
  GEN   qmp-commands.h
  GEN   qapi-types.h
  GEN   qapi-visit.h
  GEN   trace/generated-events.h
  GEN   trace/generated-tracers.h
  GEN   tests/test-qapi-types.h
  GEN   tests/test-qapi-visit.h
  GEN   tests/test-qmp-commands.h
  GEN   qemu-options.texi
  GEN   qemu-monitor.texi
  GEN   qemu-img-cmds.texi
  GEN   qemu-doc.html
  GEN   qemu-tech.html
  GEN   qemu.1
Unescaped left brace in regex is deprecated, passed through in regex; marked by <-- HERE in m/^\@strong{ <-- HERE (.*)}$/ at /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/scripts/texi2pod.pl line 320.
  GEN   qemu-img.1
Unescaped left brace in regex is deprecated, passed through in regex; marked by <-- HERE in m/^\@strong{ <-- HERE (.*)}$/ at /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/scripts/texi2pod.pl line 320.
  GEN   qemu-nbd.8
Unescaped left brace in regex is deprecated, passed through in regex; marked by <-- HERE in m/^\@strong{ <-- HERE (.*)}$/ at /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/scripts/texi2pod.pl line 320.
  GEN   QMP/qmp-commands.txt
  GEN   qapi-types.c
  GEN   qga/qapi-generated/qga-qapi-types.h
  GEN   qga/qapi-generated/qga-qapi-visit.h
  GEN   qga/qapi-generated/qga-qmp-commands.h
  CC    qapi-types.o
  GEN   qapi-visit.c
  CC    qapi-visit.o
  CC    qga/commands.o
  CC    qga/guest-agent-command-state.o
  CC    qga/main.o
  CC    qga/commands-posix.o
  CC    qga/channel-posix.o
  GEN   qga/qapi-generated/qga-qapi-types.c
  CC    qga/qapi-generated/qga-qapi-types.o
  GEN   qga/qapi-generated/qga-qapi-visit.c
  CC    qga/qapi-generated/qga-qapi-visit.o
  GEN   qga/qapi-generated/qga-qmp-marshal.c
  CC    qga/qapi-generated/qga-qmp-marshal.o
  CC    qapi/qapi-visit-core.o
  CC    qapi/qapi-dealloc-visitor.o
  CC    qapi/qmp-input-visitor.o
  CC    qapi/qmp-output-visitor.o
  CC    qapi/qmp-registry.o
  CC    qapi/qmp-dispatch.o
  CC    qapi/string-input-visitor.o
  CC    qapi/string-output-visitor.o
  CC    qapi/opts-visitor.o
  CC    qobject/qint.o
  CC    qobject/qstring.o
  CC    qobject/qdict.o
  CC    qobject/qlist.o
  CC    qobject/qfloat.o
  CC    qobject/qbool.o
  CC    qobject/qjson.o
  CC    qobject/json-lexer.o
  CC    qobject/json-streamer.o
  CC    qobject/json-parser.o
  CC    qobject/qerror.o
  GEN   trace/generated-events.c
  CC    trace/generated-events.o
  CC    trace/default.o
  CC    trace/control.o
  GEN   trace/generated-tracers.c
  CC    trace/generated-tracers.o
  CC    util/osdep.o
  CC    util/cutils.o
  CC    util/unicode.o
  CC    util/qemu-timer-common.o
  CC    util/oslib-posix.o
  CC    util/qemu-thread-posix.o
  CC    util/event_notifier-posix.o
  CC    util/envlist.o
  CC    util/path.o
  CC    util/host-utils.o
  CC    util/cache-utils.o
  CC    util/module.o
  CC    util/bitmap.o
  CC    util/bitops.o
  CC    util/hbitmap.o
  CC    util/fifo8.o
  CC    util/acl.o
  CC    util/error.o
  CC    util/qemu-error.o
  CC    util/compatfd.o
  CC    util/iov.o
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/util/iov.c: In function ‘iov_send_recv’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/util/iov.c:190:33: warning: ‘orig_len’ may be used uninitialized in this function [-Wmaybe-uninitialized]
             iov[niov-1].iov_len = orig_len;
             ~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~
  CC    util/aes.o
  CC    util/qemu-config.o
  CC    util/qemu-sockets.o
  CC    util/uri.o
  CC    util/notify.o
  CC    util/qemu-option.o
  CC    util/qemu-progress.o
  CC    util/hexdump.o
  AR    libqemuutil.a
  CC    stubs/arch-query-cpu-def.o
  CC    stubs/clock-warp.o
  CC    stubs/cpu-get-clock.o
  CC    stubs/cpu-get-icount.o
  CC    stubs/fdset-add-fd.o
  CC    stubs/fdset-find-fd.o
  CC    stubs/fdset-get-fd.o
  CC    stubs/fdset-remove-fd.o
  CC    stubs/get-fd.o
  CC    stubs/get-vm-name.o
  CC    stubs/iothread-lock.o
  CC    stubs/migr-blocker.o
  CC    stubs/mon-is-qmp.o
  CC    stubs/mon-printf.o
  CC    stubs/mon-print-filename.o
  CC    stubs/mon-protocol-event.o
  CC    stubs/mon-set-error.o
  CC    stubs/pci-drive-hot-add.o
  CC    stubs/reset.o
  CC    stubs/set-fd-handler.o
  CC    stubs/slirp.o
  CC    stubs/sysbus.o
  CC    stubs/vm-stop.o
  CC    stubs/vmstate.o
  AR    libqemustub.a
  LINK  qemu-ga
  CC    qemu-nbd.o
  CC    async.o
  CC    thread-pool.o
  CC    nbd.o
  CC    block.o
  CC    blockjob.o
  CC    main-loop.o
  CC    iohandler.o
  CC    qemu-timer.o
  CC    aio-posix.o
  CC    qemu-coroutine.o
  CC    qemu-coroutine-lock.o
  CC    qemu-coroutine-io.o
  CC    qemu-coroutine-sleep.o
  CC    coroutine-ucontext.o
  CC    block/raw.o
  CC    block/cow.o
  CC    block/qcow.o
  CC    block/vdi.o
  CC    block/vmdk.o
  CC    block/cloop.o
  CC    block/dmg.o
  CC    block/bochs.o
  CC    block/vpc.o
  CC    block/vvfat.o
  CC    block/qcow2.o
  CC    block/qcow2-refcount.o
  CC    block/qcow2-cluster.o
  CC    block/qcow2-snapshot.o
  CC    block/qcow2-cache.o
  CC    block/qed.o
  CC    block/qed-gencb.o
  CC    block/qed-l2-cache.o
  CC    block/qed-table.o
  CC    block/qed-cluster.o
  CC    block/qed-check.o
  CC    block/parallels.o
  CC    block/blkdebug.o
  CC    block/blkverify.o
  CC    block/raw-posix.o
  CC    block/nbd.o
  CC    block/sheepdog.o
  CC    block/curl.o
  LINK  qemu-nbd
  GEN   qemu-img-cmds.h
  CC    qemu-img.o
  LINK  qemu-img
  CC    qemu-io.o
  CC    cmd.o
  LINK  qemu-io
  CC    qemu-bridge-helper.o
  LINK  qemu-bridge-helper
  CC    blockdev.o
  CC    blockdev-nbd.o
  CC    readline.o
  CC    qdev-monitor.o
  CC    device-hotplug.o
  CC    os-posix.o
  CC    migration.o
  CC    migration-tcp.o
  CC    qemu-char.o
  CC    block-migration.o
  CC    page_cache.o
  CC    xbzrle.o
  CC    migration-exec.o
  CC    migration-unix.o
  CC    migration-fd.o
  CC    bt-host.o
  CC    bt-vhci.o
  CC    dma-helpers.o
  CC    vl.o
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/vl.c: In function ‘qemu_main’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/vl.c:2848:5: warning: ‘g_mem_set_vtable’ is deprecated [-Wdeprecated-declarations]
     g_mem_set_vtable(&mem_trace);
     ^~~~~~~~~~~~~~~~
In file included from /usr/include/glib-2.0/glib/glist.h:32:0,
                 from /usr/include/glib-2.0/glib/ghash.h:33,
                 from /usr/include/glib-2.0/glib.h:50,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/include/glib-compat.h:17,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/include/qemu-common.h:43,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/include/qemu/bitmap.h:15,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/vl.c:31:
/usr/include/glib-2.0/glib/gmem.h:357:7: note: declared here
 void  g_mem_set_vtable (GMemVTable *vtable);
       ^~~~~~~~~~~~~~~~
  CC    tpm.o
  GEN   qmp-marshal.c
  CC    qmp-marshal.o
  CC    qmp.o
  CC    hmp.o
  CC    qemu-log.o
  CC    tcg-runtime.o
  CC    audio/audio.o
  CC    audio/noaudio.o
  CC    audio/wavaudio.o
  CC    audio/mixeng.o
  CC    audio/sdlaudio.o
  CC    audio/ossaudio.o
  CC    audio/wavcapture.o
  CC    backends/rng.o
  CC    backends/rng-egd.o
  CC    backends/rng-random.o
  CC    backends/msmouse.o
  CC    block/stream.o
  CC    block/commit.o
  CC    block/mirror.o
  CC    disas/i386.o
  CC    fsdev/qemu-fsdev-dummy.o
  CC    fsdev/qemu-fsdev-opts.o
  CC    net/net.o
  CC    net/queue.o
  CC    net/checksum.o
  CC    net/util.o
  CC    net/hub.o
  CC    net/socket.o
  CC    net/dump.o
  CC    net/eth.o
  CC    net/tap.o
  CC    net/tap-linux.o
  CC    net/slirp.o
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/net/slirp.c: In function ‘slirp_smb_cleanup.part.2’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/net/slirp.c:469:44: warning: ‘%s’ directive output may be truncated writing up to 127 bytes into a region of size 121 [-Wformat-truncation=]
         snprintf(cmd, sizeof(cmd), "rm -rf %s", s->smb_dir);
                                            ^~
In file included from /usr/include/stdio.h:936:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/include/qemu-common.h:27,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/include/net/slirp.h:27,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/net/slirp.c:24:
/usr/include/x86_64-linux-gnu/bits/stdio2.h:64:10: note: ‘__builtin___snprintf_chk’ output between 8 and 135 bytes into a destination of size 128
   return __builtin___snprintf_chk (__s, __n, __USE_FORTIFY_LEVEL - 1,
          ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
        __bos (__s), __fmt, __va_arg_pack ());
        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/net/slirp.c: In function ‘slirp_smb’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/net/slirp.c:514:46: warning: ‘%s’ directive output may be truncated writing 8 bytes into a region of size between 0 and 127 [-Wformat-truncation=]
     snprintf(smb_conf, sizeof(smb_conf), "%s/%s", s->smb_dir, "smb.conf");
                                              ^~               ~~~~~~~~~~
In file included from /usr/include/stdio.h:936:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/include/qemu-common.h:27,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/include/net/slirp.h:27,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/net/slirp.c:24:
/usr/include/x86_64-linux-gnu/bits/stdio2.h:64:10: note: ‘__builtin___snprintf_chk’ output between 10 and 137 bytes into a destination of size 128
   return __builtin___snprintf_chk (__s, __n, __USE_FORTIFY_LEVEL - 1,
          ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
        __bos (__s), __fmt, __va_arg_pack ());
        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  CC    qom/object.o
  CC    qom/container.o
  CC    qom/qom-qobject.o
  CC    qom/cpu.o
  CC    slirp/cksum.o
  CC    slirp/if.o
  CC    slirp/ip_icmp.o
  CC    slirp/ip_input.o
  CC    slirp/ip_output.o
  CC    slirp/dnssearch.o
  CC    slirp/slirp.o
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/slirp/slirp.c:40:22: warning: ‘zero_ethaddr’ defined but not used [-Wunused-const-variable=]
 static const uint8_t zero_ethaddr[ETH_ALEN] = { 0, 0, 0, 0, 0, 0 };
                      ^~~~~~~~~~~~
  CC    slirp/mbuf.o
  CC    slirp/misc.o
  CC    slirp/sbuf.o
  CC    slirp/socket.o
  CC    slirp/tcp_input.o
  CC    slirp/tcp_output.o
  CC    slirp/tcp_subr.o
  CC    slirp/tcp_timer.o
  CC    slirp/udp.o
  CC    slirp/bootp.o
  CC    slirp/tftp.o
  CC    slirp/arp_table.o
  CC    ui/keymaps.o
  CC    ui/console.o
  CC    ui/cursor.o
  CC    ui/input.o
  CC    ui/qemu-pixman.o
  CC    ui/sdl.o
  CC    ui/sdl_zoom.o
  CC    ui/x_keymap.o
  CC    ui/curses.o
  CC    ui/vnc.o
  CC    ui/d3des.o
  CC    ui/vnc-enc-zlib.o
  CC    ui/vnc-enc-hextile.o
  CC    ui/vnc-enc-tight.o
  CC    ui/vnc-palette.o
  CC    ui/vnc-enc-zrle.o
  CC    ui/vnc-jobs.o
  CC    hw/acpi/core.o
  CC    hw/acpi/piix4.o
  CC    hw/acpi/ich9.o
  CC    hw/audio/sb16.o
  CC    hw/audio/es1370.o
  CC    hw/audio/ac97.o
  CC    hw/audio/intel-hda.o
  CC    hw/audio/hda-codec.o
  CC    hw/audio/pcspk.o
  CC    hw/block/block.o
  CC    hw/block/cdrom.o
  CC    hw/block/hd-geometry.o
  CC    hw/block/fdc.o
  CC    hw/block/pflash_cfi01.o
  CC    hw/block/pc_sysfw.o
  CC    hw/bt/core.o
  CC    hw/bt/l2cap.o
  CC    hw/bt/sdp.o
  CC    hw/bt/hci.o
  CC    hw/bt/hid.o
  CC    hw/bt/hci-csr.o
  CC    hw/char/tpci200.o
  CC    hw/char/ipoctal232.o
  CC    hw/char/ipack.o
  CC    hw/char/parallel.o
  CC    hw/char/serial.o
  CC    hw/char/serial-isa.o
  CC    hw/char/serial-pci.o
  CC    hw/char/virtio-console.o
  CC    hw/char/debugcon.o
  CC    hw/core/qdev.o
  CC    hw/core/qdev-properties.o
  CC    hw/core/irq.o
  CC    hw/core/sysbus.o
  CC    hw/core/null-machine.o
  CC    hw/core/loader.o
  CC    hw/core/qdev-addr.o
  CC    hw/core/qdev-properties-system.o
  CC    hw/display/cirrus_vga.o
  CC    hw/display/vga-pci.o
  CC    hw/display/vga-isa.o
  CC    hw/display/vmware_vga.o
  CC    hw/dma/i8257.o
  CC    hw/i2c/core.o
  CC    hw/i2c/smbus.o
  CC    hw/i2c/smbus_eeprom.o
  CC    hw/i2c/smbus_ich9.o
  CC    hw/i2c/pm_smbus.o
  CC    hw/ide/core.o
  CC    hw/ide/atapi.o
  CC    hw/ide/qdev.o
  CC    hw/ide/pci.o
  CC    hw/ide/isa.o
  CC    hw/ide/piix.o
  CC    hw/ide/ahci.o
  CC    hw/ide/ich.o
  CC    hw/input/hid.o
  CC    hw/input/pckbd.o
  CC    hw/input/ps2.o
  CC    hw/input/vmmouse.o
  CC    hw/intc/i8259_common.o
  CC    hw/intc/i8259.o
  CC    hw/intc/ioapic_common.o
  CC    hw/isa/isa-bus.o
  CC    hw/isa/apm.o
  CC    hw/misc/applesmc.o
  CC    hw/misc/debugexit.o
  CC    hw/misc/sga.o
  CC    hw/misc/pc-testdev.o
  CC    hw/net/ne2000.o
  CC    hw/net/eepro100.o
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/net/eepro100.c:318:23: warning: ‘eepro100_mdi_mask’ defined but not used [-Wunused-const-variable=]
 static const uint16_t eepro100_mdi_mask[] = {
                       ^~~~~~~~~~~~~~~~~
  CC    hw/net/pcnet-pci.o
  CC    hw/net/pcnet.o
  CC    hw/net/e1000.o
  CC    hw/net/rtl8139.o
  CC    hw/net/vmxnet_tx_pkt.o
  CC    hw/net/vmxnet_rx_pkt.o
  CC    hw/net/vmxnet3.o
  CC    hw/net/ne2000-isa.o
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/net/ne2000-isa.c:54:33: warning: ‘vmstate_isa_ne2000’ defined but not used [-Wunused-const-variable=]
 static const VMStateDescription vmstate_isa_ne2000 = {
                                 ^~~~~~~~~~~~~~~~~~
  CC    hw/nvram/eeprom93xx.o
  CC    hw/nvram/fw_cfg.o
  CC    hw/pci-bridge/pci_bridge_dev.o
  CC    hw/pci-bridge/ioh3420.o
  CC    hw/pci-bridge/xio3130_upstream.o
  CC    hw/pci-bridge/xio3130_downstream.o
  CC    hw/pci-bridge/i82801b11.o
  CC    hw/pci-host/pam.o
  CC    hw/pci-host/piix.o
  CC    hw/pci-host/q35.o
  CC    hw/pci/pci.o
  CC    hw/pci/pci_bridge.o
  CC    hw/pci/msix.o
  CC    hw/pci/msi.o
  CC    hw/pci/shpc.o
  CC    hw/pci/slotid_cap.o
  CC    hw/pci/pci_host.o
  CC    hw/pci/pcie_host.o
  CC    hw/pci/pcie.o
  CC    hw/pci/pcie_aer.o
  CC    hw/pci/pcie_port.o
  CC    hw/pci/pci-stub.o
  CC    hw/scsi/scsi-disk.o
  CC    hw/scsi/scsi-generic.o
  CC    hw/scsi/scsi-bus.o
  CC    hw/scsi/lsi53c895a.o
  CC    hw/scsi/megasas.o
  CC    hw/scsi/esp.o
  CC    hw/scsi/esp-pci.o
  CXX   hw/systemC/sc_platform.o
cc1plus: warning: /home/cwm/git/git.c-w-m/sc/systemc-2.3.2/include/../include/tlm: not a directory
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_device.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_pci_device.h:25,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/module/simple_pci.h:46,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/sc_platform.cpp:26:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/cnf_api_if.h:237:65: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   virtual sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) = 0;
                                                                 ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/cnf_api_if.h:325:40: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   virtual sc_event& getNewParamEvent() throw (RegisterObserverFailedException) = 0;
                                        ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:56:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_device.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_pci_device.h:25,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/module/simple_pci.h:46,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/sc_platform.cpp:26:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_device.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_pci_device.h:25,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/module/simple_pci.h:46,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/sc_platform.cpp:26:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_device.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_pci_device.h:25,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/module/simple_pci.h:46,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/sc_platform.cpp:26:
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
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config_api_lua_file_parser.h:27:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/sc_platform.cpp:46:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/luaFileApi/luafile_tool.h: At global scope:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/luaFileApi/luafile_tool.h:162:68: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
     void parseCommandLine(const int argc, const char* const* argv) throw(CommandLineException) {
                                                                    ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config_api_lua_file_parser.h:27:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/sc_platform.cpp:46:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/luaFileApi/luafile_tool.h:229:78: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
     void parseCommandLineWithGetOpt(const int argc, const char* const* argv) throw(CommandLineException) {
                                                                              ^~~~~
  CC    hw/timer/hpet.o
  CC    hw/timer/i8254_common.o
  CC    hw/timer/i8254.o
  CC    hw/usb/core.o
  CC    hw/usb/combined-packet.o
  CC    hw/usb/bus.o
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/usb/bus.c: In function ‘usb_port_location’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/usb/bus.c:342:66: warning: ‘%d’ directive output may be truncated writing between 1 and 11 bytes into a region of size between 0 and 15 [-Wformat-truncation=]
         snprintf(downstream->path, sizeof(downstream->path), "%s.%d",
                                                                  ^~
In file included from /usr/include/stdio.h:936:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/include/qemu-common.h:27,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/include/hw/hw.h:5,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/usb/bus.c:1:
/usr/include/x86_64-linux-gnu/bits/stdio2.h:64:10: note: ‘__builtin___snprintf_chk’ output between 3 and 28 bytes into a destination of size 16
   return __builtin___snprintf_chk (__s, __n, __USE_FORTIFY_LEVEL - 1,
          ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
        __bos (__s), __fmt, __va_arg_pack ());
        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  CC    hw/usb/desc.o
  CC    hw/usb/libhw.o
  CC    hw/usb/hcd-uhci.o
  CC    hw/usb/hcd-ohci.o
  CC    hw/usb/hcd-ehci.o
  CC    hw/usb/hcd-ehci-pci.o
  CC    hw/usb/hcd-ehci-sysbus.o
  CC    hw/usb/hcd-xhci.o
  CC    hw/usb/dev-hub.o
  CC    hw/usb/dev-hid.o
  CC    hw/usb/dev-wacom.o
  CC    hw/usb/dev-storage.o
  CC    hw/usb/dev-uas.o
  CC    hw/usb/dev-audio.o
  CC    hw/usb/dev-serial.o
  CC    hw/usb/dev-network.o
  CC    hw/usb/dev-bluetooth.o
  CC    hw/usb/dev-smartcard-reader.o
  CC    hw/usb/ccid-card-passthru.o
  CC    hw/usb/host-linux.o
  CC    hw/usb/host-legacy.o
  CC    hw/virtio/virtio-rng.o
  CC    hw/virtio/virtio-pci.o
  CC    hw/virtio/virtio-bus.o
  CC    hw/watchdog/watchdog.o
  CC    hw/watchdog/wdt_i6300esb.o
  CC    hw/watchdog/wdt_ib700.o
  CXX   hw/systemC/module/simple_pci.o
cc1plus: warning: /home/cwm/git/git.c-w-m/sc/systemc-2.3.2/include/../include/tlm: not a directory
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_device.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_pci_device.h:25,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/module/simple_pci.h:46,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/module/simple_pci.cpp:25:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/cnf_api_if.h:237:65: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   virtual sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) = 0;
                                                                 ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/cnf_api_if.h:325:40: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   virtual sc_event& getNewParamEvent() throw (RegisterObserverFailedException) = 0;
                                        ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:56:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_device.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_pci_device.h:25,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/module/simple_pci.h:46,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/module/simple_pci.cpp:25:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_device.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_pci_device.h:25,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/module/simple_pci.h:46,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/module/simple_pci.cpp:25:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_device.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_pci_device.h:25,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/module/simple_pci.h:46,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/module/simple_pci.cpp:25:
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
  CC    hw/systemC/wrapper/sc_mmio.o
  CXX   hw/systemC/wrapper/sc_device.o
cc1plus: warning: /home/cwm/git/git.c-w-m/sc/systemc-2.3.2/include/../include/tlm: not a directory
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_device.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_device.cpp:25:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/cnf_api_if.h:237:65: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   virtual sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) = 0;
                                                                 ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/cnf_api_if.h:325:40: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   virtual sc_event& getNewParamEvent() throw (RegisterObserverFailedException) = 0;
                                        ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:56:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_device.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_device.cpp:25:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_device.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_device.cpp:25:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_device.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_device.cpp:25:
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
  CXX   hw/systemC/wrapper/sc_mmio_device.o
cc1plus: warning: /home/cwm/git/git.c-w-m/sc/systemc-2.3.2/include/../include/tlm: not a directory
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_device.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_mmio_device.h:25,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_mmio_device.cpp:51:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/cnf_api_if.h:237:65: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   virtual sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) = 0;
                                                                 ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/cnf_api_if.h:325:40: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   virtual sc_event& getNewParamEvent() throw (RegisterObserverFailedException) = 0;
                                        ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:56:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_device.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_mmio_device.h:25,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_mmio_device.cpp:51:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_device.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_mmio_device.h:25,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_mmio_device.cpp:51:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_device.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_mmio_device.h:25,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_mmio_device.cpp:51:
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
  CXX   hw/systemC/wrapper/sc_wrapper.o
cc1plus: warning: /home/cwm/git/git.c-w-m/sc/systemc-2.3.2/include/../include/tlm: not a directory
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPMasterSocket.h:22,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPMasterBlockingSocket.h:29,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_wrapper.h:47,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_wrapper.cpp:25:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/cnf_api_if.h:237:65: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   virtual sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) = 0;
                                                                 ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/cnf_api_if.h:325:40: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   virtual sc_event& getNewParamEvent() throw (RegisterObserverFailedException) = 0;
                                        ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:56:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPMasterSocket.h:22,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPMasterBlockingSocket.h:29,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_wrapper.h:47,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_wrapper.cpp:25:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPMasterSocket.h:22,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPMasterBlockingSocket.h:29,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_wrapper.h:47,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_wrapper.cpp:25:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_private_Api/gcnf_private_api_t.h:486:59: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
     sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                           ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_private_Api/gcnf_private_api_t.h:506:34: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
     sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                  ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/gs_param/gs_param_class.h:33:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:71,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPMasterSocket.h:22,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPMasterBlockingSocket.h:29,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_wrapper.h:47,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_wrapper.cpp:25:
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
  CC    hw/systemC/wrapper/sc_pci.o
  CXX   hw/systemC/wrapper/sc_pci_device.o
cc1plus: warning: /home/cwm/git/git.c-w-m/sc/systemc-2.3.2/include/../include/tlm: not a directory
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_device.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_pci_device.h:25,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_pci_device.cpp:51:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/cnf_api_if.h:237:65: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   virtual sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) = 0;
                                                                 ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/cnf_api_if.h:325:40: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   virtual sc_event& getNewParamEvent() throw (RegisterObserverFailedException) = 0;
                                        ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:56:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_device.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_pci_device.h:25,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_pci_device.cpp:51:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSlaveSocket.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_device.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_pci_device.h:25,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_pci_device.cpp:51:
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
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_device.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_pci_device.h:25,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/sc_pci_device.cpp:51:
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
  CXX   hw/systemC/wrapper/pcie_rootcomplex.o
cc1plus: warning: /home/cwm/git/git.c-w-m/sc/systemc-2.3.2/include/../include/tlm: not a directory
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPMasterSocket.h:22,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPBidirectionalSocket.h:22,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/pciesocket/include/pciesocket/transport/PCIe.h:56,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/pcie_rootcomplex.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/pcie_rootcomplex.cpp:19:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/cnf_api_if.h:237:65: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   virtual sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) = 0;
                                                                 ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/cnf_api_if.h:325:40: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   virtual sc_event& getNewParamEvent() throw (RegisterObserverFailedException) = 0;
                                        ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:56:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPMasterSocket.h:22,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPBidirectionalSocket.h:22,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/pciesocket/include/pciesocket/transport/PCIe.h:56,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/pcie_rootcomplex.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/pcie_rootcomplex.cpp:19:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPMasterSocket.h:22,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPBidirectionalSocket.h:22,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/pciesocket/include/pciesocket/transport/PCIe.h:56,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/pcie_rootcomplex.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/pcie_rootcomplex.cpp:19:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_private_Api/gcnf_private_api_t.h:486:59: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
     sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                           ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_private_Api/gcnf_private_api_t.h:506:34: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
     sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                  ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/gs_param/gs_param_class.h:33:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:71,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPSocket.h:36,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPMasterSocket.h:22,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/gsgpsocket/include/gsgpsocket/transport/GSGPBidirectionalSocket.h:22,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/pciesocket/include/pciesocket/transport/PCIe.h:56,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/pcie_rootcomplex.h:24,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/systemC/wrapper/pcie_rootcomplex.cpp:19:
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
  GEN   x86_64-softmmu/hmp-commands.h
  GEN   x86_64-softmmu/qmp-commands-old.h
  GEN   x86_64-softmmu/config-target.h
  CC    x86_64-softmmu/exec.o
  CC    x86_64-softmmu/translate-all.o
  CC    x86_64-softmmu/cpu-exec.o
  CC    x86_64-softmmu/tcg/tcg.o
  CC    x86_64-softmmu/tcg/optimize.o
  CC    x86_64-softmmu/fpu/softfloat.o
  CC    x86_64-softmmu/disas.o
  CC    x86_64-softmmu/arch_init.o
  CC    x86_64-softmmu/cpus.o
  CC    x86_64-softmmu/monitor.o
  CC    x86_64-softmmu/gdbstub.o
  CC    x86_64-softmmu/balloon.o
  CC    x86_64-softmmu/ioport.o
  CC    x86_64-softmmu/qtest.o
  CC    x86_64-softmmu/device_tree.o
  CC    x86_64-softmmu/kvm-all.o
  CC    x86_64-softmmu/memory.o
  CC    x86_64-softmmu/savevm.o
  CC    x86_64-softmmu/cputlb.o
  CC    x86_64-softmmu/memory_mapping.o
  CC    x86_64-softmmu/dump.o
  CC    x86_64-softmmu/xen-stub.o
  CC    x86_64-softmmu/hw/i386/multiboot.o
  CC    x86_64-softmmu/hw/i386/smbios.o
  CC    x86_64-softmmu/hw/i386/pc.o
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/i386/pc.c:842:18: warning: ‘parallel_irq’ defined but not used [-Wunused-const-variable=]
 static const int parallel_irq[MAX_PARALLEL_PORTS] = { 7, 7, 7 };
                  ^~~~~~~~~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/qemu_sc/hw/i386/pc.c:841:18: warning: ‘parallel_io’ defined but not used [-Wunused-const-variable=]
 static const int parallel_io[MAX_PARALLEL_PORTS] = { 0x378, 0x278, 0x3bc };
                  ^~~~~~~~~~~
  CC    x86_64-softmmu/hw/i386/pc_piix.o
  CC    x86_64-softmmu/hw/i386/pc_q35.o
  CC    x86_64-softmmu/hw/i386/kvmvapic.o
  CC    x86_64-softmmu/target-i386/translate.o
  CC    x86_64-softmmu/target-i386/helper.o
  CC    x86_64-softmmu/target-i386/cpu.o
  CC    x86_64-softmmu/target-i386/excp_helper.o
  CC    x86_64-softmmu/target-i386/fpu_helper.o
  CC    x86_64-softmmu/target-i386/cc_helper.o
  CC    x86_64-softmmu/target-i386/int_helper.o
  CC    x86_64-softmmu/target-i386/svm_helper.o
  CC    x86_64-softmmu/target-i386/smm_helper.o
  CC    x86_64-softmmu/target-i386/misc_helper.o
  CC    x86_64-softmmu/target-i386/mem_helper.o
  CC    x86_64-softmmu/target-i386/seg_helper.o
  CC    x86_64-softmmu/target-i386/machine.o
  CC    x86_64-softmmu/target-i386/arch_memory_mapping.o
  CC    x86_64-softmmu/target-i386/arch_dump.o
  CC    x86_64-softmmu/target-i386/kvm.o
  CC    x86_64-softmmu/target-i386/hyperv.o
  CC    x86_64-softmmu/hw/block/virtio-blk.o
  CC    x86_64-softmmu/hw/char/virtio-serial-bus.o
  CC    x86_64-softmmu/hw/display/vga.o
  CC    x86_64-softmmu/hw/i386/kvm/clock.o
  CC    x86_64-softmmu/hw/i386/kvm/apic.o
  CC    x86_64-softmmu/hw/i386/kvm/i8259.o
  CC    x86_64-softmmu/hw/i386/kvm/ioapic.o
  CC    x86_64-softmmu/hw/i386/kvm/i8254.o
  CC    x86_64-softmmu/hw/i386/kvm/pci-assign.o
  CC    x86_64-softmmu/hw/intc/apic.o
  CC    x86_64-softmmu/hw/intc/apic_common.o
  CC    x86_64-softmmu/hw/intc/ioapic.o
  CC    x86_64-softmmu/hw/isa/lpc_ich9.o
  CC    x86_64-softmmu/hw/misc/vmport.o
  CC    x86_64-softmmu/hw/misc/ivshmem.o
  CC    x86_64-softmmu/hw/misc/vfio.o
  CC    x86_64-softmmu/hw/net/virtio-net.o
  CC    x86_64-softmmu/hw/net/vhost_net.o
  CC    x86_64-softmmu/hw/pci/pci-hotplug.o
  CC    x86_64-softmmu/hw/scsi/virtio-scsi.o
  CC    x86_64-softmmu/hw/timer/mc146818rtc.o
  CC    x86_64-softmmu/hw/virtio/virtio.o
  CC    x86_64-softmmu/hw/virtio/virtio-balloon.o
  CC    x86_64-softmmu/hw/virtio/vhost.o
  LINK+ x86_64-softmmu/qemu-system-x86_64
  CPP   optionrom/multiboot.asm
  AS    optionrom/multiboot.o
  Building optionrom/multiboot.img
  Building optionrom/multiboot.raw
  Signing optionrom/multiboot.bin
  CPP   optionrom/linuxboot.asm
  AS    optionrom/linuxboot.o
  Building optionrom/linuxboot.img
  Building optionrom/linuxboot.raw
  Signing optionrom/linuxboot.bin
  CPP   optionrom/kvmvapic.asm
  AS    optionrom/kvmvapic.o
  Building optionrom/kvmvapic.img
  Building optionrom/kvmvapic.raw
  Signing optionrom/kvmvapic.bin
[ 86%] Performing install step for 'qemu_sc'
[ 88%] Completed 'qemu_sc'
[ 88%] Built target qemu_sc
Scanning dependencies of target greenscript
[ 90%] Building CXX object libs/greenlib/greenscript/lib/CMakeFiles/greenscript.dir/__/src/greenscript.cpp.o
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/greenscript.cpp: In constructor ‘gs::script::GreenScriptModule::GreenScriptModule(sc_core::sc_module_name, const char*)’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/greenscript.cpp:178:13: error: ‘PyString_FromString’ was not declared in this scope
   name_py = PyString_FromString(name());  // new ref
             ^~~~~~~~~~~~~~~~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/greenscript.cpp:178:13: note: suggested alternative: ‘PyLong_FromString’
   name_py = PyString_FromString(name());  // new ref
             ^~~~~~~~~~~~~~~~~~~
             PyLong_FromString
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/greenscript.cpp: In member function ‘void gs::script::GreenScriptModule::load(const char*)’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/greenscript.cpp:221:21: error: ‘PyString_AsString’ was not declared in this scope
       std::string s(PyString_AsString(path_py));
                     ^~~~~~~~~~~~~~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/greenscript.cpp:221:21: note: suggested alternative: ‘PyBytes_AsString’
       std::string s(PyString_AsString(path_py));
                     ^~~~~~~~~~~~~~~~~
                     PyBytes_AsString
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/greenscript.cpp: In member function ‘void gs::script::GreenScriptModule::add_to_pythonpath(const char*)’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/greenscript.cpp:262:23: error: ‘PyString_FromString’ was not declared in this scope
   PyObject *path_py = PyString_FromString(path);  // new ref
                       ^~~~~~~~~~~~~~~~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/greenscript.cpp:262:23: note: suggested alternative: ‘PyLong_FromString’
   PyObject *path_py = PyString_FromString(path);  // new ref
                       ^~~~~~~~~~~~~~~~~~~
                       PyLong_FromString
libs/greenlib/greenscript/lib/CMakeFiles/greenscript.dir/build.make:62: recipe for target 'libs/greenlib/greenscript/lib/CMakeFiles/greenscript.dir/__/src/greenscript.cpp.o' failed
make[2]: *** [libs/greenlib/greenscript/lib/CMakeFiles/greenscript.dir/__/src/greenscript.cpp.o] Error 1
CMakeFiles/Makefile2:2001: recipe for target 'libs/greenlib/greenscript/lib/CMakeFiles/greenscript.dir/all' failed
make[1]: *** [libs/greenlib/greenscript/lib/CMakeFiles/greenscript.dir/all] Error 2
Makefile:151: recipe for target 'all' failed
make: *** [all] Error 2
```
----
## Eclipse Build
Import the code as an `Existing make project`, then build to reproduce the build error.
```
13:49:51 **** Build of configuration Default for project i7-pcie ****
make all 
[ 78%] Built target greenreg
[ 78%] No force-build step for 'qemu_sc'
[ 80%] Performing build step for 'qemu_sc'
[ 80%] Performing install step for 'qemu_sc'
[ 82%] Completed 'qemu_sc'
[ 88%] Built target qemu_sc
[ 90%] Building CXX object libs/greenlib/greenscript/lib/CMakeFiles/greenscript.dir/__/src/greenscript.cpp.o
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/greenscript.cpp: In constructor ‘gs::script::GreenScriptModule::GreenScriptModule(sc_core::sc_module_name, const char*)’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/greenscript.cpp:178:13: error: ‘PyString_FromString’ was not declared in this scope
   name_py = PyString_FromString(name());  // new ref
             ^~~~~~~~~~~~~~~~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/greenscript.cpp:178:13: note: suggested alternative: ‘PyLong_FromString’
   name_py = PyString_FromString(name());  // new ref
             ^~~~~~~~~~~~~~~~~~~
             PyLong_FromString
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/greenscript.cpp: In member function ‘void gs::script::GreenScriptModule::load(const char*)’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/greenscript.cpp:221:21: error: ‘PyString_AsString’ was not declared in this scope
       std::string s(PyString_AsString(path_py));
                     ^~~~~~~~~~~~~~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/greenscript.cpp:221:21: note: suggested alternative: ‘PyBytes_AsString’
       std::string s(PyString_AsString(path_py));
                     ^~~~~~~~~~~~~~~~~
                     PyBytes_AsString
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/greenscript.cpp: In member function ‘void gs::script::GreenScriptModule::add_to_pythonpath(const char*)’:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/greenscript.cpp:262:23: error: ‘PyString_FromString’ was not declared in this scope
   PyObject *path_py = PyString_FromString(path);  // new ref
                       ^~~~~~~~~~~~~~~~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/greenscript.cpp:262:23: note: suggested alternative: ‘PyLong_FromString’
   PyObject *path_py = PyString_FromString(path);  // new ref
                       ^~~~~~~~~~~~~~~~~~~
                       PyLong_FromString
libs/greenlib/greenscript/lib/CMakeFiles/greenscript.dir/build.make:62: recipe for target 'libs/greenlib/greenscript/lib/CMakeFiles/greenscript.dir/__/src/greenscript.cpp.o' failed
make[2]: *** [libs/greenlib/greenscript/lib/CMakeFiles/greenscript.dir/__/src/greenscript.cpp.o] Error 1
make[1]: *** [libs/greenlib/greenscript/lib/CMakeFiles/greenscript.dir/all] Error 2
make: *** [all] Error 2
CMakeFiles/Makefile2:2001: recipe for target 'libs/greenlib/greenscript/lib/CMakeFiles/greenscript.dir/all' failed
Makefile:151: recipe for target 'all' failed

13:50:02 Build Finished (took 11s.273ms)

```
