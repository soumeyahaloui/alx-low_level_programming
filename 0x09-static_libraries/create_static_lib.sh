#!/bin/bash
gcc -c *.c
ar -t libmy.a
nm libmy.a
