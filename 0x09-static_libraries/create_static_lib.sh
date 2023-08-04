#!bin/bash
ar -rc liball.a *.c
gcc -c *.c
ranlib liball.a
