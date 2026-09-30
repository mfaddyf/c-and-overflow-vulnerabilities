#!/bin/bash
gcc -w -o formatStringOverflowFixed.o formatStringOverflowFixed.c -fno-stack-protector
./formatStringOverflowFixed.o
