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
	int first_num = 48;
    	while (first_num <= 56)
    	{
        	int second_num = 49;
        	while (second_num <= 57)
        	{
            		if (second_num > first_num)
            		{
                		putchar(first_num);
                		putchar(second_num);
                		if (first_num != 56 || second_num != 57)
                		{
                    			putchar(',');
                    			putchar(' ');
                		}
            		}
            		second_num++;
        	}
        	first_num = first_num + 1;
    	}
	putchar('\n');
	return 0;
}
