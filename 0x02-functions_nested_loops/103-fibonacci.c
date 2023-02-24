#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;
	long int fibonacci[50], sum = 2;

	fibonacci[0] = 1;
	fibonacci[1] = 2;

	for (num = 2; num < 50; num++)
	{
		fibonacci[num] = fibonacci[num - 1] + fibonacci[num - 2];
		if ((fibonacci[num] % 2) == 0 && fibonacci[num] < 4000000)
			sum += fibonacci[num];
	}
	printf("%ld\n", sum);

	return (0);
}
