/**
 * _strlen_recursion - returns the length of a string
 * @s: An input string to print
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
