#!/bin/bash
gcc -c *.c # Generate Object Files From Source Files
gcc -shared -o liball.so *.o # Instructing Linker To Create Shared Library From The Provided Object Files

