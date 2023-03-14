# 0x07. C - Even more pointers, arrays and strings
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
* Write a function that fills memory with a constant byte:
    * **[0-memset.c](https://github.com/Samuel-IG16/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/0-memset.c)**
* Write a function that copies memory area:
    * **[1-memcpy.c](https://github.com/Samuel-IG16/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/1-memcpy.c)**
* Write a function that locates a character in a string:
    * **[2-strchr.c](https://github.com/Samuel-IG16/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/2-strchr.c)**
* Write a function that gets the length of a prefix substring:
    * **[3-strspn.c](https://github.com/Samuel-IG16/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/3-strspn.c)**
* Write a function that searches a string for any of a set of bytes:
    * **[4-strpbrk.c](https://github.com/Samuel-IG16/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/4-strpbrk.c)**
* Write a function that locates a substring:
    * **[5-strstr.c](https://github.com/Samuel-IG16/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/5-strstr.c)**
* Write a function that prints the chessboard:
    * **[7-print_chessboard.c](https://github.com/Samuel-IG16/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/7-print_chessboard.c)**
* Write a function that prints the sum of the two diagonals of a square matrix of integers:
    * **[8-print_diagsums.c](https://github.com/Samuel-IG16/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/8-print_diagsums.c)**
* Write a function that sets the value of a pointer to a char:
    * **[100-set_string.c](https://github.com/Samuel-IG16/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/100-set_string.c)**
* Create a file that contains the password for the [crackme2](https://github.com/holbertonschool/0x06.c) executable:
    * **[101-crackme_password](https://github.com/Samuel-IG16/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/101-crackme_password)**

Note: Your file should contain the exact password, no new line, no extra space.
`ltrace`, `ldd`, `gdb` and `objdump` can help.
You may need to install the `openssl` library to run the `crakme2` program: `sudo apt install libssl-dev`.
Edit the source list `sudo nano /etc/apt/sources.list` to add the following line: `deb http://security.ubuntu.com/ubuntu xenial-security main` Then `sudo apt update` and `sudo apt install libssl1.0.0`
