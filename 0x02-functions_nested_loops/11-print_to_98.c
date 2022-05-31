#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - The entry point of the function
 * @n: A input integer
 *
 * Description: This is a function that prints all natural numbers
 * from n to 98, followed by a new line.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d", n);
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d", n);
			n--;
		}
	}
	printf("\n");
}
