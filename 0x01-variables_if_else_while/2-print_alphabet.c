#include <stdio.h>
/**
  * Alx - SE Tasks
  * Author: Igbinijesu Samuel
  *
  * main - entry point of code 
  * return 0 always at the end of main
  */
int main(void)
{
	char lower_alpha = 'a';

    	while (lower_alpha <= 'z')
    	{
        	putchar(lower_alpha);
        	lower_alpha++;
    	}
    	putchar('\n');
	return 0;
}
