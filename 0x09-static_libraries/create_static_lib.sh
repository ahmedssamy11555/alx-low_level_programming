#!/bin/bash
gcc -c c_files/*.c
ar rc liball.a *.o
ranlib liball.a                                  
