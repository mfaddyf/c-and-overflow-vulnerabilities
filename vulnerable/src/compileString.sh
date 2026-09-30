#!/bin/bash
gcc -w -o formatStringOverflow.o formatStringOverflow.c -fno-stack-protector
./formatStringOverflow.o

