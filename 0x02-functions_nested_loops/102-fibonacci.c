#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;
	long int fibonacci[50];

	fibonacci[0] = 1;
	fibonacci[1] = 2;
	printf("%ld, %ld, ", fibonacci[0], fibonacci[1]);

	for (num = 2; num < 50; num++)
	{
		fibonacci[num] = fibonacci[num - 1] + fibonacci[num - 2];
		if (num == 49)
			printf("%ld\n", fibonacci[num]);
		else
			printf("%ld, ", fibonacci[num]);
	}

	return (0);
}
