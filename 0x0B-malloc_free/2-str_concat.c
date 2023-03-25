/**
 * str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: The pointer to the array or NULL if memory allocation
 * fails
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *str;

	for (i = 0; s1 != NULL && *(s1 + i) != '\0'; i++)
		;
	for (j = 0; s2 != NULL && *(s2 + j) != '\0'; j++)
		;
	str = malloc(sizeof(char) * i + j + 1);
	if (str)
	{
		for (i = 0; s1 != NULL && *(s1 + i) != '\0'; i++)
			*(str + i) = *(s1 + i);
		for (j = 0; s2 != NULL && *(s2 + j) != '\0'; j++)
			*(str + i + j) = *(s2 + j);
		*(str + i + j) = '\0';
		return (str);
	}
	else
	{
		return (NULL);
	}
}
