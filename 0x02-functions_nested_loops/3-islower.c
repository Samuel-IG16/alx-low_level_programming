#include "main.h"
/**
  * _islower - The entry point of the function
  * @c: The character to be checked
  *
  * Description: This is  a function that checks for lowercase character.
  * Return: islower_bool value
  */
int _islower(int c)
{
	char lowercase_alpha = 'a';
	int islower_bool = 0;

	while (lowercase_alpha <= 'z')
	{
		if (lowercase_alpha == c)
			islower_bool = 1;
		lowercase_alpha++;
	}
	return (islower_bool);
}
