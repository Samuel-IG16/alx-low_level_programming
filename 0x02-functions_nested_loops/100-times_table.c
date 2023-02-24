#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n : The operand that specifies the size of time table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int firstnumber, secondnumber, multiplication_result;

	if (n < 0 || n > 15)
		return;

	for (firstnumber = 0; firstnumber <= n; firstnumber++)
	{
		for (secondnumber = 0; secondnumber <= n; secondnumber++)
		{
			multiplication_result = firstnumber * secondnumber;
			if (secondnumber == 0)
				_putchar(multiplication_result + '0');
			else
			{
				_putchar(',');
				_putchar(' ');
				if (multiplication_result < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(multiplication_result + '0');
				}
				else if (multiplication_result < 100)
				{
					_putchar(' ');
					_putchar((multiplication_result / 10) + '0');
					_putchar((multiplication_result % 10) + '0');
				}
				else
				{
					_putchar((multiplication_result / 100) + '0');
					_putchar(((multiplication_result / 10) % 10) + '0');
					_putchar((multiplication_result % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
}
