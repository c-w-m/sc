# Git Clone and Update Submodules
----
## i7-pcie.git clone
```
$ git clone https://git.greensocs.com/platforms/i7-pcie.git

Cloning into 'i7-pcie'...
remote: Counting objects: 66, done.
remote: Compressing objects: 100% (63/63), done.
remote: Total 66 (delta 29), reused 0 (delta 0)
Unpacking objects: 100% (66/66), done.
Checking connectivity... done.
```
----
## i7-pcie.git submodule update
```
$ cd i7-pcie

$ git submodule update --init

Submodule 'images' (http://git.greensocs.com/platforms-images/i7-pcie.git) registered for path 'images'
Submodule 'libs/greenlib' (http://git.greensocs.com/greenlib/greenlib.git) registered for path 'libs/greenlib'
Submodule 'libs/pcie_socket' (http://git.greensocs.com/models/pcie_socket.git) registered for path 'libs/pciesocket'
Submodule 'libs/qemu_sc' (http://git.greensocs.com/qemu/qemu_sc_pcie.git) registered for path 'libs/qemu_sc'
Cloning into 'images'...
remote: Counting objects: 7, done.
remote: Compressing objects: 100% (6/6), done.
remote: Total 7 (delta 0), reused 0 (delta 0)
Unpacking objects: 100% (7/7), done.
Checking connectivity... done.
Submodule path 'images': checked out 'a4e50aafb589c5df9901b7ad601dc2a43a4944be'
Cloning into 'libs/greenlib'...
remote: Counting objects: 4964, done.
remote: Compressing objects: 100% (1665/1665), done.
remote: Total 4964 (delta 3072), reused 4874 (delta 3015)
Receiving objects: 100% (4964/4964), 20.95 MiB | 1.01 MiB/s, done.
Resolving deltas: 100% (3072/3072), done.
Checking connectivity... done.
Submodule path 'libs/greenlib': checked out 'a4c8a865e93811eb59eccb87b7f763f3fbcfddf9'
Cloning into 'libs/pciesocket'...
remote: Counting objects: 200, done.
remote: Compressing objects: 100% (113/113), done.
remote: Total 200 (delta 87), reused 180 (delta 79)
Receiving objects: 100% (200/200), 2.05 MiB | 667.00 KiB/s, done.
Resolving deltas: 100% (87/87), done.
Checking connectivity... done.
Submodule path 'libs/pciesocket': checked out '36ec321ab5cb3bb44a32d262ff4a43e33accbc96'
Cloning into 'libs/qemu_sc'...
remote: Counting objects: 144025, done.
remote: Compressing objects: 100% (29043/29043), done.
remote: Total 144025 (delta 114554), reused 143989 (delta 114534)
Receiving objects: 100% (144025/144025), 50.23 MiB | 957.00 KiB/s, done.
Resolving deltas: 100% (114554/114554), done.
Checking connectivity... done.
Submodule path 'libs/qemu_sc': checked out '58c1a7ce1ee0be2566ae0ee1c35802f2e4658d83'
```
----
## qemu_sc submodule update
```
$ cd libs/qemu_sc

$ git submodule update --init dtc

Submodule 'dtc' (git://git.qemu.org/dtc.git) registered for path 'dtc'
Cloning into 'dtc'...
remote: Counting objects: 4286, done.
remote: Compressing objects: 100% (1673/1673), done.
remote: Total 4286 (delta 3160), reused 3445 (delta 2571)
Receiving objects: 100% (4286/4286), 967.80 KiB | 0 bytes/s, done.
Resolving deltas: 100% (3160/3160), done.
Checking connectivity... done.
Submodule path 'dtc': checked out 'bc895d6d09695d05ceb8b52486ffe861d6cfbdde'
```
