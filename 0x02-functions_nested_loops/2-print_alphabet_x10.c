#include "main.h"
/**
  * Alx - SE Tasks
  * Author: Igbinijesu Samuel
  *
  * void function
  * return nothing
  */
void print_alphabet_x10(void)
{
	int loopcount = 0;

    	while (loopcount < 10)
    	{
        	char lowercase_alpha = 'a';

        	while (lowercase_alpha <= 'z')
        	{
            		_putchar(lowercase_alpha);
            		lowercase_alpha++;
        	}
        	loopcount++;
        	_putchar('\n');
    	}
}
