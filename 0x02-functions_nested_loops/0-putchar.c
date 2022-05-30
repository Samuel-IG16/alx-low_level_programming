#include <unistd.h>
#include "main.h"
/**
  * Alx - SE Tasks
  * Author: Igbinijesu Samuel
  *
  * main - entry point of code 
  * return 0 always at the end of main
  */
int main(void)
{
	char word[8] = "_putchar";
	int letter_index = 0;

	while (letter_index < 8)
    	{
        	_putchar(word[letter_index]);
        	letter_index++;
    	}
	_putchar('\n');
	return 0;
}
