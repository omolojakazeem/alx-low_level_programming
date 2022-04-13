#include "main.h"

/**
 * print_sign - Print the sign of an input
 * @n: takes integer n
 *
 * Return: 1 if +, 0 if -
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar(48 + 0);
		return (0);
	}
	else
	{
		if (n > 0)
		{
			_putchar(43 + 0);
			return (1);
		}
		else
		{
			_putchar(45 + 0);
			return (-1);
		}
	}
}
