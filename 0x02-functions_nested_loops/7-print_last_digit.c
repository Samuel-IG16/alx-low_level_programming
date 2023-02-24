#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @r: The number to be checked
 *
 * Return: last_digt
 */
int print_last_digit(int r)
{
	int last_digt;

	if (r < 0)
		last_digt = (r * -1) % 10;
	else
		last_digt = r % 10;
	_putchar(last_digt + '0');
	return (last_digt);
}
