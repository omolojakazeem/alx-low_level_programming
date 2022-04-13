#include "main.h"

/**
 * print_alphabet_x10 - Function to print all aphabet 10 times
 *
 * return - Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char alp = 'a';

		while (alp <= 'z')
		{
			_putchar(alp);
			alp++;
		}
		_putchar('\n');
		i++;
	}
}
