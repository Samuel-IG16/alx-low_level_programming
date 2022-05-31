#include "main.h"
/**
 * print_times_table - The entry point of the function
 * @n : The operand that specifies the size of time table
 *
 * Description: This a function that prints the n times table, starting
 * with 0. If n is greater than 15 or less than 0 the function should not
 * print anything.
 */
void print_times_table(int n)
{
	int firstnum, secondnum, multiplication_result;

	if (n <= 15)
	{
		firstnum = 0;
		while (firstnum <= n)
		{
			secondnum = 0;
			while (secondnum <= n)
			{
				multiplication_result = firstnum * secondnum;
				if (secondnum != n)
				{
					if ((multiplication_result / 10) == 0)
					{
						_putchar(multiplication_result + '0');
						_putchar(',');
						_putchar(' ');
					}
					else if ((multiplication_result / 10) > 9)
					{
						_putchar((multiplication_result / 100) + '0');
						_putchar(((multiplication_result % 100) / 10) + '0');
						_putchar((multiplication_result % 10) + '0');
						_putchar(',');
						_putchar(' ');
					}
					else
					{
						_putchar((multiplication_result / 10) + '0');
						_putchar((multiplication_result % 10) + '0');
						_putchar(',');
						_putchar(' ');
					}
				}
				else
				{
					if ((multiplication_result / 10) == 0)
						_putchar(multiplication_result + '0');
					else if ((multiplication_result / 10) > 9)
					{
						_putchar((multiplication_result / 100) + '0');
						_putchar(((multiplication_result % 100) / 10) + '0');
						_putchar((multiplication_result % 10) + '0');
					}
					else
					{
						_putchar((multiplication_result / 10) + '0');
						_putchar((multiplication_result % 10) + '0');
					}
				}
				secondnum++;
			}
			firstnum++;
			_putchar('\n');
		}
	}
	else
		return;
}
