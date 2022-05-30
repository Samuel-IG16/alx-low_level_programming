#include "main.h"
/**
  * print_alphabet - The entry point of the function
  * @void: The function takes no parameters
  *
  * Description:  This function prints the alphabet, in lowercase,
  * followed by a new line. You can only use _putchar twice in your code.
  */
void print_alphabet(void)
{
	char lowercase_alpha = 'a';

	while (lowercase_alpha <= 'z')
	{
		_putchar(lowercase_alpha);
		lowercase_alpha++;
	}
	_putchar('\n');
}
