#include <stdio.h>

/**
  * Alx - SE Tasks
  * Author: Igbinijesu Samuel
  *
  * main - entry point of code 
  * return 0 always at the end of main
  */
int main(void)
{
	int firstnum, secondnum, thirdnum;
    	firstnum = 48;

	while (firstnum < 58)
	{
	    	secondnum = 49;

		while (secondnum < 58)
		{
			thirdnum = 50;

			while (thirdnum < 58)
			{
				if (thirdnum > secondnum && secondnum > firstnum)
				{
					putchar(firstnum);
					putchar(secondnum);
					putchar(thirdnum);
					if (firstnum != 55 || secondnum != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
				thirdnum++;
			}
			secondnum++;
		}
		firstnum++;
	}
	putchar('\n');
	return 0;
}
