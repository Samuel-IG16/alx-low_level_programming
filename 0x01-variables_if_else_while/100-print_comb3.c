#include <stdio.h>
/**
  * main - The entry point of C programs
  * @void: The function takes no parameters
  *
  * Description: This  program that prints all possible different
  * combinations of two digits. The two digits must be different and unique.
  * Return: 0
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
