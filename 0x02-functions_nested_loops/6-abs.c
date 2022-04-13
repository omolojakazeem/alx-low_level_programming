#include "main.h"
#include <stdio.h>

/**
 * _abs - Function to get  absolute value of number
 *
 * @n: inpute integer
 *
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}
	return (n);
}
