#include "main.h"
/**
  * print_alphabet_x10 - The entry point of the function
  * @void: The function takes no parameters
  *
  * Description: This function prints 10 times the alphabet, in lowercase,
  * followed by a new line. You can only use _putchar twice in your code
  */
void print_alphabet_x10(void)
{
	int loopcount;
	char lowercase_alpha;

	loopcount = 0;
	while (loopcount < 10)
	{
		lowercase_alpha = 'a';
		while (lowercase_alpha <= 'z')
		{
			_putchar(lowercase_alpha);
			lowercase_alpha++;
		}
		loopcount++;
		_putchar('\n');
	}
}
