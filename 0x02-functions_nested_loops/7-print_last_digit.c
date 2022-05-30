#include "main.h"
/**
  * Alx - SE Tasks
  * Author: Igbinijesu Samuel
  *
  * return last digit of a number
  */
int print_last_digit(int r)
{
	int last_digt;

    	if (n < 0)
        	last_digt = (n * -1) % 10;
    	else
        	last_digt = n % 10;

    	_putchar(last_digt + '0');
    	return last_digt;
}
