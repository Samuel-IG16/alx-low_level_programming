#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number to be checked
 *
 * Return: last_digt
 */
int print_last_digit(int n)
{
	int last_digt;

	if (n < 0)
		last_digt = (n * -1) % 10;
	else
		last_digt = n % 10;
	_putchar(last_digt + '0');
	return (last_digt);
}
