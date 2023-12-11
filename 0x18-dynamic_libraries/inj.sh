#!/bin/bash

cat putchar.c > $1
vim $1
betty $1
