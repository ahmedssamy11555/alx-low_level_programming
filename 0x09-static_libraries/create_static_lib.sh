#!/bin/bash
gcc -c *.c files_c/*.c
ar rc libmy.a *.o
ranlib libmy.a                                  
