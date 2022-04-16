#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character should be printed
 */

void print_diagonal(int n)
{
	int position, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (position = 1; position <= n; position++)
		{
			for (space = 1; space < position; space++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
