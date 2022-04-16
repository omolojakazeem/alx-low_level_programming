#include "main.h"

/**
 * print_line - print a straight line
 *
 * @n: is the number of times the _ character should be printed
 */

void print_line(int n)
{
	int ln_char;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (ln_char = 1; ln_char <= n; ln_char++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
