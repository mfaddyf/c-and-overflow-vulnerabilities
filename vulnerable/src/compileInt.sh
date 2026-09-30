#!/bin/bash
gcc -o integerOverflow.o integerOverflow.c -fno-stack-protector
./integerOverflow.o

