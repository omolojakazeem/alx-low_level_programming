#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
		for (b = 48; b <= 57; b++)
		{
			putchar(b);
		}
		putchar(',');
	}
	return (0);
}
