#include "main.h"
/**
  * Alx - SE Tasks
  * Author: Igbinijesu Samuel
  *
  * return 1 if number is positive or 0 if number is zero or -1 if number is negative
  */
int print_sign(int n)
{
	int signvalue;

    	if (n > 0)
    	{
        	signvalue = 1;
        	_putchar('+');
    	}
    	else if (n == 0)
    	{
        	signvalue = 0;
        	_putchar('0');
    	}
    	else
    	{
        	signvalue = -1;
        	_putchar('-');
    	}
    	return signvalue;
}
