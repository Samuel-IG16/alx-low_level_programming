# C - Debugging
## Requirements
### General
* Allowed editors: `vi`, `vim`, `emacs`
* All files are compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pendantic -std=gnu89`
* All files ends with a new line
* The README contains the description of all tasks in the project
* There are no errors or warnings during compilation
* The codes uses betty style
## Description
```c
#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
        int i;

        i = 98;
        positive_or_negative(i);

        return (0);
}
```
* Based on the main.c file above, create a file named 0-main.c. This file must test that the function `positive_or_negative()` gives the correct output when given a case of 0:
    * **[0-main.c](https://github.com/Samuel-IG16/alx-low_level_programming/blob/master/0x03-debugging/0-main.c)**
```c
#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        while (i < 10)
        {
                putchar(i);
        }

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
```
* Copy this main file. Comment out (don’t delete it!) the part of the code that is causing the output to go into an infinite loop:
    * **[1-main.c](https://github.com/Samuel-IG16/alx-low_level_programming/blob/master/0x03-debugging/1-main.c)**
```c
#include <stdio.h>
#include "main.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
        int a, b, c;
        int largest;

        a = 972;
        b = -98;
        c = 0;

        largest = largest_number(a, b, c);

        printf("%d is the largest number\n", largest);

        return (0);
}
```
* Fix the code in `2-largest_number.c` so that it correctly prints out the largest of three numbers, no matter the case:
    * **[2-largest_number.c](https://github.com/Samuel-IG16/alx-low_level_programming/blob/master/0x03-debugging/2-largest_number.c)**
```c
#include <stdio.h>
#include "main.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

int main(void)
{
    int month;
    int day;
    int year;

    month = 4;
    day = 01;
    year = 1997;

    printf("Date: %02d/%02d/%04d\n", month, day, year);

    day = convert_day(month, day);

    print_remaining_days(month, day, year);

    return (0);
}
```
* Fix the `print_remaining_days()` function so that the output works correctly for all dates and all leap years:
    * **[3-print_remaining_days.c](https://github.com/Samuel-IG16/alx-low_level_programming/blob/master/0x03-debugging/3-print_remaining_days.c)**
