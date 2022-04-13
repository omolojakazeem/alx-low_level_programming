#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 *
 * @n: input argument
 *
 * Return: lastDigit
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		last_digit = -1 * (n % 0);
	}
	else
	{
		last_digit = n % 10;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
