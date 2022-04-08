#include <stdio.h>
#include <stdlib.h>4

/**
 * main - Entry point
 *
 * Return - Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' & ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
