#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int base_ten_numbers = 0;

	while (base_ten_numbers < 10)
	{
		printf("%u", base_ten_numbers);
		base_ten_numbers++;
	}
	putchar('\n');
	return (0);
}
