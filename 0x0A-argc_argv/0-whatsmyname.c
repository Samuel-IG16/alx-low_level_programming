#include <stdio.h>
/**
* main - prints its name, followed by a new line
* @argc: number of commandline arguments
* @argv: list of commandline arguments
*
* Return: 0 Always(success)
*/

int main(int argc, char **argv)

{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
