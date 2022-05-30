#include <stdio.h>
/**
  * main - The entry point of C programs
  * @void: The function takes no parameters
  *
  * Description: This program that prints the alphabet in lowercase,
  * except 'q' and 'e' and then followed by a new line. You are to use only
  * the putchar function not more than twice.
  * Return: 0
  */
int main(void)
{
	char not_complete = 'a';

	while (not_complete <= 'z')
	{
		if (not_complete != 'e' && not_complete != 'q')
			putchar(not_complete);
		not_complete++;
	}
	putchar('\n');
	return (0);
}
