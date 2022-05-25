#include <stdlib.h>
#include <time.h>
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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
        	printf("%i is positive\n", n);
    	else if (n < 0)
        	printf("%i is negative\n", n);
    	else
        	printf("%i is zero\n", n);
	return 0;
}
