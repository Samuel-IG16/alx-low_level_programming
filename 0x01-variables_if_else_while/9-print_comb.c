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
	int single_nums = 48;

    	while (single_nums <= 57)
    	{
        	putchar(single_nums);
        	if (single_nums != 57)
        	{
            		putchar(',');
            		putchar(' ');
        	}
        	single_nums++;
    	}
    	putchar('\n');
	return 0;
}
