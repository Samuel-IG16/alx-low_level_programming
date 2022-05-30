#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - The entry point of C programs
  * @void: The function takes no parameters
  *
  * Description: This program will assign a random number to the variable n
  * each time it is executed and print the last digit of the number stored
  * in the variable n followed by a new line.
  * Return: 0
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %i is %i ", n, n % 10);
	if ((n % 10) > 5)
		printf("and is greater than 5\n");
	if ((n % 10) == 0)
		printf("and is 0\n");
	if ((n % 10) < 6 && (n % 10) != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
