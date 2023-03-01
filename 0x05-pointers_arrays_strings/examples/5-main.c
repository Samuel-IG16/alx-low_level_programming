#include "../main.h"
#include "../5-rev_string.c"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[10] = "My School";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}
