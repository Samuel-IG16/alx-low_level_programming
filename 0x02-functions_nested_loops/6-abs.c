#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: The argument to be evaluated
 *
 * Return: abs_val
 */
int _abs(int n)
{
	int abs_val;

	if (n < 0)
		abs_val = -1 * n;
	else
		abs_val = n;
	return (abs_val);
}
