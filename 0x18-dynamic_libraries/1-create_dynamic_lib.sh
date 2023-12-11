#!/bin/bash
: 'this is a script for creating a dynamic library  called
liball.so from all the c files in the current directory'

gcc -c *.c -fpic

gcc *.o -shared -o liball.so

