#include "main.h"

/**
 * print_alphabet - Function to print alphabet
 * return: Always 0
 *
 */
void print_alphabet(void)
{
	int i = 97;

	while (i <= 112)
	{
		_putchar(i);
		i++;
	}
	_putchar(i);
	_putchar('\n');
	}
