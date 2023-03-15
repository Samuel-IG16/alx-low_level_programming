#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: pointer destination
 * @src: pointer source
 *
 * Return: a pointer to the resulting string
*/
char *_strcat(char *dest, char *src)
{
	char *dest_end = dest;

	while (*dest_end != '\0')
		dest_end++;

	while (*src != '\0')
		*dest_end++ = *src++;

	*dest_end = '\0';
	return (dest);
}

