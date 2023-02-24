#include <stdio.h>
#define LARGEST 10000000000

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int front_digit_1 = 0, back_digit_1 = 1, front_digit_2 = 0, back_digit_2 = 2;
	unsigned long int carry1, carry2, carry3;
	int count;

	printf("%lu, %lu, ", back_digit_1, back_digit_2);
	for (count = 2; count < 98; count++)
	{
		if (back_digit_1 + back_digit_2 > LARGEST || front_digit_2 > 0 || front_digit_1 > 0)
		{
			carry1 = (back_digit_1 + back_digit_2) / LARGEST;
			carry2 = (back_digit_1 + back_digit_2) % LARGEST;
			carry3 = front_digit_1 + front_digit_2 + carry1;
			front_digit_1 = front_digit_2, front_digit_2 = carry3;
			back_digit_1 = back_digit_2, back_digit_2 = carry2;
			printf("%lu%010lu", front_digit_2, back_digit_2);
		}
		else
		{
			carry2 = back_digit_1 + back_digit_2;
			back_digit_1 = back_digit_2, back_digit_2 = carry2;
			printf("%lu", back_digit_2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
