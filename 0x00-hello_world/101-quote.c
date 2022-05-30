#include <stdio.h>
#include <unistd.h>
/**
  * main - The entry point of C programs
  * @void: The function takes no parameters
  *
  * Description: The function "write" writes to stderr.
  * Return: 1
  */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
