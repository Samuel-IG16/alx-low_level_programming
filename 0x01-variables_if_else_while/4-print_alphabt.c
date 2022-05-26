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
	char not_complete = 'a';

    	while (not_complete <= 'z')
    	{
        	if (not_complete != 'e' && not_complete != 'q')
            		putchar(not_complete);
        	not_complete++;
    	}
	putchar('\n');
	return 0;
}
