#include "main.h"
/**
  * _isalpha - The entry point of the function
  * @c: The argument to be checked
  *
  * Description: This is a function that checks for alphabetic character.
  * Return: isletter_bool value
  */
int _isalpha(int c)
{
	char lowercase_alpha, uppercase_alpha;
	int isletter_bool = 0;

	lowercase_alpha = 'a';
	while (lowercase_alpha <= 'z')
	{
		uppercase_alpha = 'A';
		while (uppercase_alpha <= 'Z')
		{
			if (c == lowercase_alpha || c == uppercase_alpha)
				isletter_bool = 1;
			uppercase_alpha++;
		}
		lowercase_alpha++;
	}
	return (isletter_bool);
}
