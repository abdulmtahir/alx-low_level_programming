#!/bin/bash
gcc -wall -pedantic -werror -wextra -c *.c liball.a 
ar rc liball.a *.o 
