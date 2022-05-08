#include <stdio.h>

/**
* main - prints all arguments it receives, one per line
* @argc: number of commandline arguments
* @argv: list of commandline arguments
*
* Return: 0 Always(success)
*/

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
