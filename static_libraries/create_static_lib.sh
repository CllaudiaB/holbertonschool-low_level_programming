#!/bin/bash
gcc -c *.c
av ar liball.a *.o
ranlib liball.a
