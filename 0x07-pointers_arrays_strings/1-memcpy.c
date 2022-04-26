#include "main.h"

/**
* _memcpy - copies memory area
* @dest: memory area to copy the bytes to
* @src: memory area to copy the bytes from
* @n: number of bytes to copy
*
* Return: a pointer to the memory area dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
