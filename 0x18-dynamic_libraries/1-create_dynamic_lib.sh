#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c -fPIC *.c
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
