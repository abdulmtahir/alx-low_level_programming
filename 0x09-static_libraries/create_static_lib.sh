#!/bin/bash
gcc -wall -pedantic -werror -wextra -c *.c create_static_lib.sh
ar rc liball.a *.o 
