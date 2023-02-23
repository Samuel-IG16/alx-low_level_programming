#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int first_num, second_num;

	first_num = 48;
	while (first_num <= 57)
	{
		second_num = 48;
		while (second_num <= 57)
		{
			if (second_num > first_num)
			{
				putchar(first_num);
				putchar(second_num);
				if (first_num != 56 || second_num != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
			second_num++;
		}
		first_num++;
	}
	putchar('\n');
	return (0);
}
