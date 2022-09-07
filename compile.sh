#!/bin/sh

# This script is used to compile the source code of the project.
clear;
make;
gcc main.c gabi.a -o main.out && ./main.out;
echo "\n\n\033[0;94mCurrent time is $(date), so hurry! 🎉\033[0m\n";
rm *.out