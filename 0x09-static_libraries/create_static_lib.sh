#!/bin/bash
<<<<<<< HEAD
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
=======
gcc -c *.c
ar rc liball.a *.c
>>>>>>> 7fb6514dd7148c87afffceae603482a02109dc09
