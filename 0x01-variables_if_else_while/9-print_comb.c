#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 48;

	while (a <= 57)
	{
		putchar(a);
		if (a < 57)
		{
			putchar(',');
		}
		putchar(' ');
		a++;
	}
	return (0);
}
