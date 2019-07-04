#!/bin/bash

export tesing_with=$(pwd)/..
export PATH=$PATH:$tesing_with/new_compiler/bin
sh2-elf-gcc -Wall -nostdlib -T shelf.x main.c -c -o main.o
sh2-elf-gcc -Wall -nostdlib -T shelf.x interrupt.c -c -o interrupt.o
sh2-elf-gcc -Wall -nostdlib -T shelf.x wait.c -c -o wait.o
sh2-elf-ld -o vmlinux -T shelf.x -L $tesing_with/new_compiler/lib/gcc/sh2-elf/9.1.0 -L $tesing_with/linux/sh/lib -M main.o interrupt.o wait.o -nostdlib -verbose > build.log


