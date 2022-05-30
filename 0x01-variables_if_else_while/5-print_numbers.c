#include <stdio.h>
/**
  * main - The entry point of C programs
  * @void: The function takes no parameters
  *
  * Description: This program prints all single digit numbers of base 10
  * starting from 0, followed by a new line.
  * Return: 0
  */
int main(void)
{
	char decimal_num = 0;

	while (decimal_num < 10)
	{
		printf("%d", decimal_num);
		decimal_num++;
	}
	putchar('\n');
	return (0);
}
