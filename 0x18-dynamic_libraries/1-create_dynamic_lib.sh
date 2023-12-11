#!/bin/bash
for file in *.c; do
    gcc -c "$file" -o "${file%.c}.o"; gcc *.o -shared -o liball.so
done
