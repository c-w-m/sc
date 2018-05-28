
# CMake with Warnings
----
## Set Environment Variables
```
$ source activate PY27
(PY27) $ mkdir build
(PY27) $ export PYTHON_INCLUDE_DIR=~/anaconda2/envs/PY27/include/python2.7
(PY27) $ export PYTHON_LIBRARY=~/anaconda2/envs/PY27/lib/libpython2.7.so
(PY27) $ export ARFLAGS="rv"
```
----
## CMake
```
(PY27) $ cmake -DCMAKE_INSTALL_PREFIX=build -DSYSTEMC_PREFIX=~/git/git.c-w-m/sc/systemc-2.3.2/
-- The C compiler identification is GNU 7.3.0
-- The CXX compiler identification is GNU 7.3.0
-- Check for working C compiler: /usr/bin/cc
-- Check for working C compiler: /usr/bin/cc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /usr/bin/c++
-- Check for working CXX compiler: /usr/bin/c++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Searching for SystemC
-- SystemC version = 2.3.2
-- SystemC library = /home/cwm/git/git.c-w-m/sc/systemc-2.3.2/lib-linux64/libsystemc.a
-- Searching for TLM
running ls /home/cwm/git/git.c-w-m/sc/systemc-2.3.2/include/tlm.h 2>&1
/home/cwm/git/git.c-w-m/sc/systemc-2.3.2/include/tlm.h
-- TLM library = /home/cwm/git/git.c-w-m/sc/systemc-2.3.2/include/tlm.h
-- Found Lua: /usr/lib/x86_64-linux-gnu/liblua5.2.so;/usr/lib/x86_64-linux-gnu/libm.so (found version "") 
-- Searching for SystemC
-- SystemC version = 2.3.2
-- SystemC library = /home/cwm/git/git.c-w-m/sc/systemc-2.3.2/lib-linux64/libsystemc.a
-- Searching for TLM
running ls /home/cwm/git/git.c-w-m/sc/systemc-2.3.2/include/tlm.h 2>&1
/home/cwm/git/git.c-w-m/sc/systemc-2.3.2/include/tlm.h
-- TLM library = /home/cwm/git/git.c-w-m/sc/systemc-2.3.2/include/tlm.h
-- Boost version: 1.58.0
-- Found PythonLibs: /usr/lib/x86_64-linux-gnu/libpython3.5m.so (found version "3.5.2") 
-- Found SWIG: /usr/bin/swig3.0 (found version "3.0.8") 
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
```


