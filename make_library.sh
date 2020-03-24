#!/bin/sh

cc -Wall -c my_lib.c
ar -rcs my_lib.a my_lib.o
