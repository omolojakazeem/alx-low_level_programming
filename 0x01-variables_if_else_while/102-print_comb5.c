#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			if (a != b)
			{
				putchar(a / 10);
				putchar(a % 10);
				putchar(' ');
				putchar(b / 10);
				putchar(b % 10);
				if (a != 146 || b != 147)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
