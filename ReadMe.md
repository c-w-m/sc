# SystemC
SystemC (**SC**) sandbox, initially branched from version 2.3.2 downloaded from [here](http://www.accellera.org/downloads/standards/systemc).

## SystemC 2.3.2
Standards are developed in a collaborative and open environment by technical working groups. Working groups operate by building consensus regarding requirements, proposed new features, and implementation. Ultimately these may become part of a future standard. Participation in the technical working groups is the primary way that progress is made in improving the SystemC language, implementation, and associated libraries.

All of our members and community are welcome to download the specifications and documents made publicly available by the working groups.

Note: In 2016 Accellera re-licensed all SystemC supplemental material under the Apache 2.0 License. Access to some previous releases of SystemC material may still require acceptance of the terms of the SystemC Open Source License while the process of updating license statements is underway. Please contact the Accellera office if you have any questions.

### Current Releases
| Item                         | Download                                            | Update     |
|------------------------------|-----------------------------------------------------|------------|
| SystemC 2.3.2 (Includes TLM) | [Core SystemC Language and Examples (tar.gz)](http://www.accellera.org/images/downloads/standards/systemc/systemc-2.3.2.tar.gz)         | 2017-10-15 |
|                              | [SystemC Regression Test Suite (tar.gz)](http://www.accellera.org/images/downloads/standards/systemc/systemc-regressions-2.3.2.tar.gz)	             | 2017-10-15 |
| SystemC AMS 2.0              | [Analog/Mixed-signal (AMS) Language Reference Manual](http://www.accellera.org/images/downloads/standards/systemc/SystemC_AMS_2_0_LRM.pdf) | 2016-08-12 |
| SystemC Verification 2.0.1   | [SystemC Verification Library (SCV) (tar.gz)](http://www.accellera.org/images/downloads/standards/systemc/scv-2.0.1.tar.gz)         | 2017-12-08 |
| SystemC Synthesis 1.4.7      | [SystemC Synthesis Subset Language Reference Manual](http://www.accellera.org/images/downloads/standards/systemc/SystemC_Synthesis_Subset_1_4_7.pdf)  | 2016-03-11 |
---------------------------------------------------------------------------------------------------

## How to Install SystemC
1. Downloading the source code
Register at http://www.accellera.org and then download systemc-2.3.2.tgz from the Accellera SystemC standards download page

2. Uncompressing the source code tarballs
```
	$ tar zxvf systemc-2.3.2.tgz
```

3. Configuring SystemC
Fine tuning of the installation directories:
```
  --bindir=DIR            user executables [EPREFIX/bin]
  --sbindir=DIR           system admin executables [EPREFIX/sbin]
  --libexecdir=DIR        program executables [EPREFIX/libexec]
  --sysconfdir=DIR        read-only single-machine data [PREFIX/etc]
  --sharedstatedir=DIR    modifiable architecture-independent data [PREFIX/com]
  --localstatedir=DIR     modifiable single-machine data [PREFIX/var]
  --libdir=DIR            object code libraries [EPREFIX/lib]
  --includedir=DIR        C header files [PREFIX/include]
  --oldincludedir=DIR     C header files for non-gcc [/usr/include]
  --datarootdir=DIR       read-only arch.-independent data root [PREFIX/share]
  --datadir=DIR           read-only architecture-independent data [DATAROOTDIR]
  --infodir=DIR           info documentation [DATAROOTDIR/info]
  --localedir=DIR         locale-dependent data [DATAROOTDIR/locale]
  --mandir=DIR            man documentation [DATAROOTDIR/man]
  --docdir=DIR            documentation root [DATAROOTDIR/doc/systemc]
  --htmldir=DIR           html documentation [DOCDIR]
  --dvidir=DIR            dvi documentation [DOCDIR]
  --pdfdir=DIR            pdf documentation [DOCDIR]
  --psdir=DIR             ps documentation [DOCDIR]
```
For example, the following configure switches will create the following
```
<root> -|
        |-bin -|
               |-doc
               |-lib |
                     |- debug-qt
                     |- release-qt
               |-include
        |-systemc-2.3.2
```
To handle threads, SystemC relies on __QuickThreads__, a fast implementation of user's threads. QuickThreads speeds-up threads switching compared to the slower kernel POSIX threads and thus considerably improves overall simulation performance. To configure the SystemC building process with the built-in QuickThreads (__recommended__), do the following at the command prompt:
```
	$ SC_ROOT=/home/cwm/git/git.c-w-m/sc/bin
    $ mkdir ${SC_ROOT}
    $ mkdir ${SC_ROOT}/lib
    $ mkdir ${SC_ROOT}/lib/debug-qt
    $ mkdir ${SC_ROOT}/lib/release-qt

	$ cd systemc-2.3.2
	$ mkdir build
	$ mkdir build/debug-qt
	$ mkdir build/release-qt

	$ cd build/release-qt
	build/release-qt$ ../../configure --prefix=${SC_ROOT} --libdir=${SC_ROOT}/lib/release-qt
or
	build/release-qt$ cd ../debug-qt
	build/debug-qt$ ../../configure --prefix=${SC_ROOT} --enable-debug --libdir=${SC_ROOT}/lib/debug-qt
```
However, if you intend to instrument your simulator (e.g. with valgrind) to debug the simulator memory leaks, bad memory accesses, pointers, and uninitialized memory reads, you should use the slower kernel POSIX threads (__pthreads__). To configure the SystemC building process with the kernel POSIX threads, do the following at the command prompt:
```
	$ SC_ROOT=/home/cwm/git/git.c-w-m/sc/bin
    $ mkdir ${SC_ROOT}
    $ mkdir ${SC_ROOT}/lib
    $ mkdir ${SC_ROOT}/lib/debug-pt
    $ mkdir ${SC_ROOT}/lib/release-pt

	$ cd systemc-2.3.2
	$ mkdir build
	$ mkdir build/debug-pt
	$ mkdir build/release-pt

	$ cd build/release-pt
	build/release-pt$ ../../configure --prefix=${SC_ROOT} --libdir=${SC_ROOT}/lib/release-pt --enable-pthreads
or
	build/release-pt$ cd ../debug-pt
	build/debug-pt$ ../../configure --prefix=${SC_ROOT} --enable-debug --libdir=${SC_ROOT}/lib/debug-pt --enable-pthreads
```
Note: To build the SystemC examples using the make files you will have to set __`PTHREADS=1`__.  If you forget to set this flag the make build will fail to link.

4. Compiling and installing SystemC
To compile SystemC, do the following at the command prompt from each of the respective subdirectories:
```
	//for example, building the release QuickThreads version
	build/release-qt$ make
	build/release-qt$ make install
```

## Git Repository Creation and Update
### Fork
1. checkout
       $ git checkout -b my-new-feature
2. commit
       $ git commit -m "<brief notes on changes>
3. push to branch
       $ git push origin my-new-feature

### Master
1. clone
       $ git clone https://github.com/c-w-m/sc.git
2. commit
       $ git commit -m "<brief notes on changes>
3. push
       $ git push origin master
