# CMakeCache Fix
After making the changes to `CMakeCache.txt` file.
```
(PY27) $ make

-- Searching for SystemC
-- SystemC version = 2.3.2
-- SystemC library = /home/cwm/git/git.c-w-m/sc/systemc-2.3.2/lib-linux64/libsystemc.a
-- Searching for TLM
running ls /home/cwm/git/git.c-w-m/sc/systemc-2.3.2/include/tlm.h 2>&1
/home/cwm/git/git.c-w-m/sc/systemc-2.3.2/include/tlm.h
-- TLM library = /home/cwm/git/git.c-w-m/sc/systemc-2.3.2/include/tlm.h
-- Searching for SystemC
-- SystemC version = 2.3.2
-- SystemC library = /home/cwm/git/git.c-w-m/sc/systemc-2.3.2/lib-linux64/libsystemc.a
-- Searching for TLM
running ls /home/cwm/git/git.c-w-m/sc/systemc-2.3.2/include/tlm.h 2>&1
/home/cwm/git/git.c-w-m/sc/systemc-2.3.2/include/tlm.h
-- TLM library = /home/cwm/git/git.c-w-m/sc/systemc-2.3.2/include/tlm.h
-- Boost version: 1.58.0
-- Found PythonLibs: ~/anaconda2/envs/PY27/lib/libpython2.7.so  
-- Configuring done
CMake Warning (dev) at CMakeLists.txt:129 (add_dependencies):
  Policy CMP0046 is not set: Error on non-existent dependency in
  add_dependencies.  Run "cmake --help-policy CMP0046" for policy details.
  Use the cmake_policy command to set the policy and suppress this warning.

  The dependency target "pciesocket" of target "qemu_sc" does not exist.
This warning is for project developers.  Use -Wno-dev to suppress it.

CMake Warning (dev) at libs/greenlib/greenscript/examples/greenmessage/CMakeLists.txt:16 (add_dependencies):
  Policy CMP0046 is not set: Error on non-existent dependency in
  add_dependencies.  Run "cmake --help-policy CMP0046" for policy details.
  Use the cmake_policy command to set the policy and suppress this warning.

  The dependency target "greenmessage" of target "compile_test" does not
  exist.
This warning is for project developers.  Use -Wno-dev to suppress it.

CMake Warning (dev) at libs/greenlib/greenscript/examples/greenmessage-configset/CMakeLists.txt:20 (add_dependencies):
  Policy CMP0046 is not set: Error on non-existent dependency in
  add_dependencies.  Run "cmake --help-policy CMP0046" for policy details.
  Use the cmake_policy command to set the policy and suppress this warning.

  The dependency target "greenmessage-configset" of target "compile_test"
  does not exist.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Generating done
-- Build files have been written to: /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie
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
[ 78%] No force-build step for 'qemu_sc'
[ 80%] Performing build step for 'qemu_sc'
[ 80%] Performing install step for 'qemu_sc'
[ 82%] Completed 'qemu_sc'
[ 88%] Built target qemu_sc
Scanning dependencies of target greenscript
[ 90%] Building CXX object libs/greenlib/greenscript/lib/CMakeFiles/greenscript.dir/__/src/greenscript.cpp.o
[ 90%] Linking CXX static library libgreenscript.a
[ 90%] Built target greenscript
Scanning dependencies of target gsp_scPYTHON_wrap
[ 92%] Generating ../gsp_scPYTHON_wrap.cxx
[ 92%] Built target gsp_scPYTHON_wrap
Scanning dependencies of target _gsp_sc
[ 94%] Building CXX object libs/greenlib/greenscript/lib/CMakeFiles/_gsp_sc.dir/__/src/gsp_sc.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/../include/greenscript/gsp_sc.h:116,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/gsp_sc.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/cnf_api_if.h:237:65: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   virtual sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) = 0;
                                                                 ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/cnf_api_if.h:325:40: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   virtual sc_event& getNewParamEvent() throw (RegisterObserverFailedException) = 0;
                                        ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:56:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/../include/greenscript/gsp_sc.h:116,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/gsp_sc.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/../include/greenscript/gsp_sc.h:116,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/gsp_sc.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_private_Api/gcnf_private_api_t.h:486:59: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
     sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                           ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_private_Api/gcnf_private_api_t.h:506:34: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
     sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                  ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/gs_param/gs_param_class.h:33:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:71,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/../include/greenscript/gsp_sc.h:116,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/gsp_sc.cpp:35:
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
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/../include/greenscript/gsp_sc.h:118:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/gsp_sc.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/configFileApi/configfile_tool.h: At global scope:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/configFileApi/configfile_tool.h:171:66: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   void parseCommandLine(const int argc, const char* const* argv) throw(CommandLineException) {
                                                                  ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/configFileApi/configfile_tool.h:318:76: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   void parseCommandLineWithGetOpt(const int argc, const char* const* argv) throw(CommandLineException) {
                                                                            ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/../include/greenscript/gsp_sc.h:121:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/gsp_sc.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/luaFileApi/luafile_tool.h:162:68: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
     void parseCommandLine(const int argc, const char* const* argv) throw(CommandLineException) {
                                                                    ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/../include/greenscript/gsp_sc.h:121:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/gsp_sc.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/luaFileApi/luafile_tool.h:229:78: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
     void parseCommandLineWithGetOpt(const int argc, const char* const* argv) throw(CommandLineException) {
                                                                              ^~~~~
[ 94%] Building CXX object libs/greenlib/greenscript/lib/CMakeFiles/_gsp_sc.dir/__/gsp_scPYTHON_wrap.cxx.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/include/../include/greenscript/gsp_sc.h:116,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/gsp_scPYTHON_wrap.cxx:3794:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/cnf_api_if.h:237:65: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   virtual sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) = 0;
                                                                 ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/cnf_api_if.h:325:40: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   virtual sc_event& getNewParamEvent() throw (RegisterObserverFailedException) = 0;
                                        ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:56:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/include/../include/greenscript/gsp_sc.h:116,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/gsp_scPYTHON_wrap.cxx:3794:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/include/../include/greenscript/gsp_sc.h:116,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/gsp_scPYTHON_wrap.cxx:3794:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_private_Api/gcnf_private_api_t.h:486:59: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
     sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                           ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_private_Api/gcnf_private_api_t.h:506:34: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
     sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                  ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/gs_param/gs_param_class.h:33:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:71,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/include/../include/greenscript/gsp_sc.h:116,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/gsp_scPYTHON_wrap.cxx:3794:
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
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/include/../include/greenscript/gsp_sc.h:118:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/gsp_scPYTHON_wrap.cxx:3794:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/configFileApi/configfile_tool.h: At global scope:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/configFileApi/configfile_tool.h:171:66: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   void parseCommandLine(const int argc, const char* const* argv) throw(CommandLineException) {
                                                                  ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/configFileApi/configfile_tool.h:318:76: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   void parseCommandLineWithGetOpt(const int argc, const char* const* argv) throw(CommandLineException) {
                                                                            ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/include/../include/greenscript/gsp_sc.h:121:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/gsp_scPYTHON_wrap.cxx:3794:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/luaFileApi/luafile_tool.h:162:68: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
     void parseCommandLine(const int argc, const char* const* argv) throw(CommandLineException) {
                                                                    ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/include/../include/greenscript/gsp_sc.h:121:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/gsp_scPYTHON_wrap.cxx:3794:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/luaFileApi/luafile_tool.h:229:78: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
     void parseCommandLineWithGetOpt(const int argc, const char* const* argv) throw(CommandLineException) {
                                                                              ^~~~~
[ 96%] Linking CXX shared library _gsp_sc.so
[ 96%] Built target _gsp_sc
Scanning dependencies of target gsp_sc_saPYTHON_wrap
[ 96%] Generating ../gsp_sc_saPYTHON_wrap.cxx
[ 96%] Built target gsp_sc_saPYTHON_wrap
Scanning dependencies of target _gsp_sc_sa
[ 98%] Building CXX object libs/greenlib/greenscript/lib/CMakeFiles/_gsp_sc_sa.dir/__/src/gsp_sc.cpp.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/../include/greenscript/gsp_sc.h:116,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/gsp_sc.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/cnf_api_if.h:237:65: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   virtual sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) = 0;
                                                                 ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/cnf_api_if.h:325:40: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   virtual sc_event& getNewParamEvent() throw (RegisterObserverFailedException) = 0;
                                        ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:56:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/../include/greenscript/gsp_sc.h:116,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/gsp_sc.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/../include/greenscript/gsp_sc.h:116,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/gsp_sc.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_private_Api/gcnf_private_api_t.h:486:59: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
     sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                           ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_private_Api/gcnf_private_api_t.h:506:34: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
     sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                  ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/gs_param/gs_param_class.h:33:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:71,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/../include/greenscript/gsp_sc.h:116,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/gsp_sc.cpp:35:
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
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/../include/greenscript/gsp_sc.h:118:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/gsp_sc.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/configFileApi/configfile_tool.h: At global scope:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/configFileApi/configfile_tool.h:171:66: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   void parseCommandLine(const int argc, const char* const* argv) throw(CommandLineException) {
                                                                  ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/configFileApi/configfile_tool.h:318:76: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   void parseCommandLineWithGetOpt(const int argc, const char* const* argv) throw(CommandLineException) {
                                                                            ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/../include/greenscript/gsp_sc.h:121:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/gsp_sc.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/luaFileApi/luafile_tool.h:162:68: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
     void parseCommandLine(const int argc, const char* const* argv) throw(CommandLineException) {
                                                                    ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/../include/greenscript/gsp_sc.h:121:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/src/gsp_sc.cpp:35:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/luaFileApi/luafile_tool.h:229:78: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
     void parseCommandLineWithGetOpt(const int argc, const char* const* argv) throw(CommandLineException) {
                                                                              ^~~~~
[100%] Building CXX object libs/greenlib/greenscript/lib/CMakeFiles/_gsp_sc_sa.dir/__/gsp_sc_saPYTHON_wrap.cxx.o
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:50:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/include/../include/greenscript/gsp_sc.h:116,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/gsp_sc_saPYTHON_wrap.cxx:3794:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/cnf_api_if.h:237:65: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   virtual sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) = 0;
                                                                 ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/cnf_api_if.h:325:40: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   virtual sc_event& getNewParamEvent() throw (RegisterObserverFailedException) = 0;
                                        ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:56:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/include/../include/greenscript/gsp_sc.h:116,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/gsp_sc_saPYTHON_wrap.cxx:3794:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1013:57: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                         ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_Api/GCnf_Api_t.h:1134:32: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:57:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/include/../include/greenscript/gsp_sc.h:116,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/gsp_sc_saPYTHON_wrap.cxx:3794:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_private_Api/gcnf_private_api_t.h:486:59: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
     sc_event& getUpdateEvent(const std::string &parname)  throw (RegisterObserverFailedException) {
                                                           ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/GCnf_private_Api/gcnf_private_api_t.h:506:34: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
     sc_event& getNewParamEvent() throw (RegisterObserverFailedException) {
                                  ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/gs_param/gs_param_class.h:33:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/config.h:71,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/include/../include/greenscript/gsp_sc.h:116,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/gsp_sc_saPYTHON_wrap.cxx:3794:
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
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/include/../include/greenscript/gsp_sc.h:118:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/gsp_sc_saPYTHON_wrap.cxx:3794:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/configFileApi/configfile_tool.h: At global scope:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/configFileApi/configfile_tool.h:171:66: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   void parseCommandLine(const int argc, const char* const* argv) throw(CommandLineException) {
                                                                  ^~~~~
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/configFileApi/configfile_tool.h:318:76: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
   void parseCommandLineWithGetOpt(const int argc, const char* const* argv) throw(CommandLineException) {
                                                                            ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/include/../include/greenscript/gsp_sc.h:121:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/gsp_sc_saPYTHON_wrap.cxx:3794:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/luaFileApi/luafile_tool.h:162:68: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
     void parseCommandLine(const int argc, const char* const* argv) throw(CommandLineException) {
                                                                    ^~~~~
In file included from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/include/../include/greenscript/gsp_sc.h:121:0,
                 from /home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greenscript/gsp_sc_saPYTHON_wrap.cxx:3794:
/home/cwm/git/git.c-w-m/sc/ext/gs/i7-pcie/libs/greenlib/greencontrol/include/greencontrol/gcnf/apis/luaFileApi/luafile_tool.h:229:78: warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]
     void parseCommandLineWithGetOpt(const int argc, const char* const* argv) throw(CommandLineException) {
                                                                              ^~~~~
[100%] Linking CXX shared library _gsp_sc_sa.so
[100%] Built target _gsp_sc_sa
```