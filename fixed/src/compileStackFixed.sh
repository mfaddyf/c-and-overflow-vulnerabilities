#!/bin/bash
gcc -o stackOverflowFixed.o stackOverflowFixed.c -fno-stack-protector
./stackOverflowFixed.o
