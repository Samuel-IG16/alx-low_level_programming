#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: The number argument to be checked
 *
 * Return: sign_of_n
 */
int print_sign(int n)
{
	int sign_of_n;

	if (n > 0)
	{
		sign_of_n = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		sign_of_n = 0;
		_putchar('0');
	}
	else
	{
		sign_of_n = -1;
		_putchar('-');
	}
	return (sign_of_n);
}
