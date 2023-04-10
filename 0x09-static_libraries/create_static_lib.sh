!#/bin/bash
#compile all .c file into object files
gcc -Wall -Werror -Wextra -pedantic -c *.c
#creat the static library
ar rc liball.a *.o
