#!/bin/bash
gcc -o integerOverflowFixed.o integerOverflowFixed.c -fno-stack-protector
./integerOverflowFixed.o

