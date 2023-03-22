# 0x0B. C - malloc, free
## Requirements
### General
* Allowed eiditors: `vi`, `vim`, `emacs`
* All files are compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pendantic -std=gnu89`
* All files ends with a new line
* The README contains the description of all tasks in the project
* The codes uses betty style
* No global variables were used
* No standard library functions were used e.g `printf`, `puts`, etc.
* The only C standard library functions used are `malloc` and `free`. No use of functions like `printf`, `puts`, `calloc`, `realloc` etc…
* Allowed to used use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
* The prototypes of all functions is included the header file called `main.h`
## Description
The C programs can be compiled using the examples files
```bash
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 examples/[c-filename-here] && ./a.out
```
* Write a function that creates an array of chars, and initializes it with a specific char:
    * **[0-create_array.c](https://github.com/Samuel-IG16/alx-low_level_programming/blob/master/0x0B-malloc_free/0-whatsmyname.c)**
* Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter:
    * **[1-strdup.c](https://github.com/Samuel-IG16/alx-low_level_programming/blob/master/0x0B-malloc_free/1-strdup.c)**
* Write a function that concatenates two strings:
    * **[2-str_concat.c](https://github.com/Samuel-IG16/alx-low_level_programming/blob/master/0x0B-malloc_free/2-str_concat.c)**
* Write a function that returns a pointer to a 2 dimensional array of integers:
    * **[3-alloc_grid.c](https://github.com/Samuel-IG16/alx-low_level_programming/blob/master/0x0B-malloc_free/3-alloc_grid.c)**
* Write a function that frees a 2 dimensional grid previously created by your `alloc_grid` function:
    * **[4-free_grid.c](https://github.com/Samuel-IG16/alx-low_level_programming/blob/master/0x0B. C - malloc, free/4-free_grid.c)**
* Write a function that concatenates all the arguments of your program:
    * **[100-argstostr.c](https://github.com/Samuel-IG16/alx-low_level_programming/blob/master/0x0B-malloc_free/100-argstostr.c)**
* Write a function that splits a string into words:
    * **[101-strtow.c](https://github.com/Samuel-IG16/alx-low_level_programming/blob/master/0x0B-malloc_free/101-strtow.c)**
