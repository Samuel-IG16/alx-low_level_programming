#include "main.h"

/**
 * print_alphabet - prints the alphabets in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char lowercase_alphabet = 'a';

	while (lowercase_alphabet <= 'z')
	{
		_putchar(lowercase_alphabet);
		lowercase_alphabet++;
	}
	_putchar('\n');
}
