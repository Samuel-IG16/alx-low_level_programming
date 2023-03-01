# 0x05. C - Pointers, arrays and strings
## Requirements
### General
* Allowed eiditors: `vi`, `vim`, `emacs`
* All files are compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pendantic -std=gnu89`
* All files ends with a new line
* The README contains the description of all tasks in the project
* The codes uses betty style
* No global variables were used
* No standard library functions were used e.g `printf`, `puts`, etc.
* Allowed to used use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
* The prototypes of all functions is included the header file called `main.h`
## Description
The C programs can be compiled using the examples files
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 examples/[c-filename-here] && ./a.out
```
* Write a function that takes a pointer to an `int` as parameter and updates the value it points to to `98`:
    * **[0-reset_to_98.c](https://github.com/Samuel-IG16/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/0-reset_to_98.c)**
* Write a function that swaps the values of two integers:
    * **[1-swap.c](https://github.com/Samuel-IG16/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/1-swap.c)**
* Write a function that returns the length of a string:
    * **[2-strlen.c](https://github.com/Samuel-IG16/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/2-strlen.c)**
* Write a function that prints a string, followed by a new line, to `stdout`:
    * **[3-puts.c](https://github.com/Samuel-IG16/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/3-puts.c)**
* Write a function that prints a string, in reverse, followed by a new line:
    * **[4-print_rev.c](https://github.com/Samuel-IG16/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/4-print_rev.c)**
* Write a function that reverses a string:
    * **[5-rev_string.c](https://github.com/Samuel-IG16/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/5-rev_string.c)**
* Write a function that prints every other character of a string, starting with the first character, followed by a new line:
    * **[6-puts2.c](https://github.com/Samuel-IG16/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/6-puts2.c)**
* Write a function that prints half of a string, followed by a new line:
    * **[7-puts_half.c](https://github.com/Samuel-IG16/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/7-puts_half.c)**
* Write a function that prints `n` elements of an array of integers, followed by a new line:
    * **[8-print_array.c](https://github.com/Samuel-IG16/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/8-print_array.c)**
* Write a function that copies the string pointed to by `src`, including the terminating null byte (`\0`), to the buffer pointed to by `dest`:
    * **[9-strcpy.c](https://github.com/Samuel-IG16/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/9-strcpy.c)**
* Write a function that convert a string to an integer:
    * **[100-atoi.c](https://github.com/Samuel-IG16/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/100-atoi.c)**

Note: Use the `-fsanitize=signed-integer-overflow` gcc flag to compile your code
```bash
vagrant@ubuntu-focal:~/alx-low_level_programming/0x05-pointers_arrays_strings$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -fsanitize=signed-integer-overflow examples/100-main.c
vagrant@ubuntu-focal:~/alx-low_level_programming/0x05-pointers_arrays_strings$ ./a.out
```
* Create a program that generates random valid passwords for the program [101-crackme](https://github.com/holbertonschool/0x04.c):
    * **[101-keygen.c](https://github.com/Samuel-IG16/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/101-keygen.c)**
