#include "main.h"
/**
  * Alx - SE Tasks
  * Author: Igbinijesu Samuel
  *
  * void function
  * return nothing
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
