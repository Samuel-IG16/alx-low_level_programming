#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @x: The argument to be evaluated
 *
 * Return: abs_val
 */
int _abs(int x)
{
	int abs_val;

	if (x < 0)
		abs_val = -1 * x;
	else
		abs_val = x;
	return (abs_val);
}
