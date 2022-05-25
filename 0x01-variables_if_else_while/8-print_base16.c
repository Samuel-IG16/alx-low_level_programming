#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hex_num = 48;
    	char hex_alpha = 'a';

    	while (hex_num <= 57)
    	{
        	putchar(hex_num);
        	hex_num++;
    	}
    	while (hex_alpha <= 'f')
    	{
        	putchar(hex_alpha);
        	hex_alpha++;
    	}
    	putchar('\n');
	return 0;
}
