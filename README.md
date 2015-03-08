# hacettepe-workshop

Hacettepe cyber security workshop.

## exercises-1
- nasm -f elf32 1.s -o 1.o
- ld -m elf\_i386 1.o -o 1

## exercises-2
- gcc 2.c -o 2
- gcc 2.c -S

## exercises-3
- gcc 3.c -o 3 -m32 -O0 
- echo $?

## demo-1
- file demo-1

## demo-2
- file demo-2

## demo-3
- file demo-3
- tar xvf demo-3

## demo-4
- file demo-4
- binwalk demo-4
- dd if=demo-4 of=4.elf skip=14654 count=4284 bs=1
- dd if=demo-4 of=4.gz skip=19618 bs=1
- gunzip 4.gz

## demo-5
- file demo-5
- exiftool demo-5

## demo-6
- file 6
- bvi 6
- 89 50 4E 47 0D 0A 1A 0A
- 7F 45 4C 46 01 01 00 00

## demo-7
- gcc demo-7.c -o demo-7 -m32
- file demo-7
- ./demo-7 , ./demo-7 blabla
- strings demo-7

## demo-8
- gcc demo-8.c -o demo-8 -m32 -O3 -g
- file demo-8
- ./demo-8, ./demo-8 blabla
- strings demo-8
- objdump -D demo-8
- objdump -D demo-8 | grep main
- objdump -D demo-8 | grep 08048330 -A 37
- ida

## demo-8.1
- strip demo-8.1
- objdump -D demo-8.1
- readelf -h demo-8.1
- ida

## demo-9
- gcc demo-9.c -o demo-9 -m32 -O3
- strip demo-9
- file demo-9
- strings demo-9
- objdump -D demo-9
- readelf -h demo-9
- ida
- gdb -q ./demo-9
- run "deger"
- b 0x8048610
- info registers
- p $eax
- x/x $ebx
- x/16x $ebx
- x/16i $eip
- x $esp
- x/s $esp

## demo-10
- peid
- ida
- ollydbg
- binary patch

# Requirements
- GNU/Linux, windows xp, python 2.7
- readelf, objdump, exiftool, xxd, hexdump, gdb
- file, strings, strip, gcc, bvi, binwalk
- ollydbg, ida, peid

# Resources
- http://beginners.re/
- http://thelegendofrandom.com/blog/sample-page
- http://maijin.github.io/radare2book/
- http://www.cs.virginia.edu/~evans/cs216/guides/x86.html
- http://www.unknownroad.com/rtfm/gdbtut/
- https://www.youtube.com/watch?v=K0g-twyhmQ4&list=PLyqno_bgl3e-zLBZGdi_zsPQYPQUlZYe4
- http://0xax.blogspot.com.tr/search/label/asm
- http://www.myne-us.com/2010/08/from-0x90-to-0x4c454554-journey-into.html
- https://quequero.org/downloads/disassemblers-debuggers/
- http://www.vxheaven.org/lib/vsc04.html
- http://community.coresecurity.com/~gera/InsecureProgramming/
