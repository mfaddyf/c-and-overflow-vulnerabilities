#!/bin/bash
gcc -o stackOverflow.o stackOverflow.c -fno-stack-protector
./stackOverflow.o

