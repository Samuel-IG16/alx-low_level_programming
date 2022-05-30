#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - The entry point of C programs
  * @void: The function takes no parameters
  *
  * Description: This program will assign a random number to the variable n
  * each time it is executed and prints whether the number stored in the
  * variable n is positive or negative followed by a new line.
  * Return: 0
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
	return (0);
}
