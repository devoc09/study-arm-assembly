# study ARM Assembly

## environment
```
$ cat /etc/os-release
PRETTY_NAME="Ubuntu 22.04.4 LTS"
NAME="Ubuntu"
VERSION_ID="22.04"
VERSION="22.04.4 LTS (Jammy Jellyfish)"

$ lscpu                                                                                                    127
Architecture:            x86_64
  CPU op-mode(s):        32-bit, 64-bit
  Address sizes:         48 bits physical, 48 bits virtual
  Byte Order:            Little Endian
CPU(s):                  24
  On-line CPU(s) list:   0-23
Vendor ID:               AuthenticAMD
  Model name:            AMD Ryzen 9 7900X 12-Core Processor
```

## Build & Execute
Building......
```
$ arm-linux-gnueabihf-gcc -o helloworld.elf helloworld.c
```

Executing.......
```
$ qemu-arm-static -L /usr/arm-linux-gnueabihf/ helloworld.elf
```
