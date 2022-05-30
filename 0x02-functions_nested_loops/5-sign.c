#include "main.h"
/**
  * print_sign - The entry point of the function
  * @n: The number argument to be checked
  *
  * Description: This is a function that prints the sign of a number.
  * Return: signvalue
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
	return (signvalue);
}
