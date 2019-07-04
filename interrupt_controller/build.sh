#!/bin/bash
#-L $tesing_with/linux/sh/lib
#-L $tesing_with/new_compiler/lib/gcc/sh2-elf/9.1.0/  ## seems to be needed for my program to start
#-L $tesing_with/linux/sh/lib/{ashiftrt.S,ashlsi3.S,ashrsi3.S,lshrsi3.S,udiv_qrnnd.S,udivsi3.S,udivsi3_i4i.S,udivsi3_i4i.S}
#-L $tesing_with/linux/sh/lib -L 

export tesing_with=$(pwd)/..
export PATH=$PATH:$tesing_with/new_compiler/bin
sh2-elf-gcc -Wall -nostdlib -T shelf.x main.c -c -o main.o
sh2-elf-gcc -Wall -nostdlib -T shelf.x interrupt.c -c -o interrupt.o
sh2-elf-gcc -Wall -nostdlib -T shelf.x wait.c -c -o wait.o
sh2-elf-ld -o vmlinux -T shelf.x  -M main.o interrupt.o wait.o $tesing_with/new_compiler/lib/gcc/sh2-elf/9.1.0/libgcc.a -nostdlib -verbose > build.log


