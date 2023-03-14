/**
 * string_toupper - changes all lowercase letters of a string
 * to upper case
 * @s: an input string
 *
 * Return: pointer to converted string
 */
char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (start);
}
