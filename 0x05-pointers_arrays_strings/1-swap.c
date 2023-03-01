#include "main.h"

/**
 * swap_int -  swaps the values of two integers
 * @a: an inout integer pointer
 * @b: an input integer pointer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
