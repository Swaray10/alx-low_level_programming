#!/bin/bash
gcc -wall -wexttra -werror -pedantic -c -fPIC *.c
gvv -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
