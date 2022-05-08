#include <stdio.h>
/**
* main - prints the number of arguments passed into it, followed by a new line
* @argc: number of commandline arguments
* @argv: list of commandline arguments
*
* Return: 0 Always(success)
*/

int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
