#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -c -r liball.a *.o
