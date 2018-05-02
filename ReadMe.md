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

## SystemC Build from Ubuntu 16.04 Using Eclipse
The 'INSTALL' file gives the commandline build instructions so what follows is an adaptation for a Linux (Ubuntu 16.04) build from Eclipse.

1. clone SystemC
       $ git clone https://github.com/c-w-m/sc.git
2. update aclocal.m4 file (needed for v 1.15)
       $ autoreconf -i
       $ autoconf
       $ automake
3. Create the Eclipse workspace, one directory level above the SystemC clone directory, for example
       $ /home/$USERNAME/git/git.c-w-m/sc
4. Update Eclipse preferences to make the IDE more user friendly
      a. Terminal lines to 5000
       Preferences | Terminal | Terminal buffer lines: 5000
      b. spelling dictionary and visible print marging
       Preferences | General | Editors | Text Editors
       Show print margin: 80
       Print margin     : light blue
       Spelling
        Select spelling engine to use: C/C++ spelling engine
        User defined dictionary      : /home/$USERNAME/git/git.c-w-m/sc/codeDictionary.txt
5. Create C++ systemc-2.3.2 project
	   File | Import | C/C++ |  Existing code as Autotools project
         Project Name : systemc-2.3.2
         Code Location: /home/$USERNAME/git/git.c-w-m/sc/systemc-2.3.2
         Language     : C++ Project
6. Build project
       Project Explorer | right click 'system-2.3.2' project | Build Project
7. Build Targets
      a. make check
       Project Explorer | 'system-2.3.2' project | Build Targets | right click 'check' | Build Target
      a. make install
       Project Explorer | 'system-2.3.2' project | Build Targets | right click 'install' | Build Target


