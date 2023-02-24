#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: The argument to be checked
 *
 * Return: isletter_bool value
 */
int _isalpha(int c)
{
	char lowercase_alphabet, uppercase_alphabet;
	int isletter_bool = 0;

	lowercase_alphabet = 'a';
	while (lowercase_alphabet <= 'z')
	{
		uppercase_alphabet = 'A';
		while (uppercase_alphabet <= 'Z')
		{
			if (c == lowercase_alphabet || c == uppercase_alphabet)
				isletter_bool = 1;
			uppercase_alphabet++;
		}
		lowercase_alphabet++;
	}
	return (isletter_bool);
}
