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
	char sub_alpha = 'a';
    	char sup_alpha = 'A';

    	while ( sub_alpha <= 'z')
    	{
        	putchar(sub_alpha);
        	sub_alpha++;
    	}
    	while (sup_alpha <= 'Z')
    	{
        	putchar(sup_alpha);
        	sup_alpha++;
    	}
    	putchar('\n');
	return 0;
}
