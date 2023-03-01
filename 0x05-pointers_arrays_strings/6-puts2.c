#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: An input string
 *
 * Return: void
 */
void puts2(char *str)
{
	int len = 0, i = 0;

	while (str[len] != '\0')
		len++;

	len -= 1;

	for (; i <= len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
