#include "_putchar.c"
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char word[8] = "_putchar";
	int letter_index = 0;

	while (letter_index < 8)
	{
		_putchar(word[letter_index]);
		letter_index++;
	}
	_putchar('\n');
	return (0);
}
