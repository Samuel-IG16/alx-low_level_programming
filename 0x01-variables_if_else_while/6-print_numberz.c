#include <stdio.h>
/**
  * main - The entry point of C programs
  * @void: The function takes no parameters
  *
  * Description: This program prints all single digit numbers of base 10
  * starting from 0, followed by a new line. Do not use any variable of
  * type char. You are to only use the putchar function not more than twice.
  * Return: 0
  */
int main(void)
{
	int num = 48;

	while (num < 58)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
