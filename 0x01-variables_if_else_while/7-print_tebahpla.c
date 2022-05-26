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
	char reverse_sub_alpha = 'z';

    	while (reverse_sub_alpha >= 'a')
    	{
        	putchar(reverse_sub_alpha);
        	reverse_sub_alpha--;
    	}
    	putchar('\n');
	return 0;
}
