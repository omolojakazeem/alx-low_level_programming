#include "main.h"

/**
 * print_alphabet - Function to print alphabet
 * return: Always 0
 *
 */
void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		_putchar(alp);
		alp++;
	}
	_putchar(alp);
	_putchar('\n');
	}
