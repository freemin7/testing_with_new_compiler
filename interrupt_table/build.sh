#!/bin/bash

export PATH=$PATH:/home/joto/Projekte/j-core/porting/new_compiler/bin
sh2-elf-gcc -Wall -nostdlib -T shelf.x main.c -c -o main.o
sh2-elf-gcc -Wall -nostdlib -T shelf.x interupt.c -c -o interupt.o
sh2-elf-ld -o vmlinux -T shelf.x -L /home/joto/Projekte/j-core/porting/new_compiler/lib/gcc/sh2-elf/9.1.0 -L /home/joto/Projekte/j-core/porting/linux/sh/lib -M main.o interupt.o -nostdlib