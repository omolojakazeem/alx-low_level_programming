#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 *
 * @a: first integer
 * @b: second integer
 * @c: third integer
 *
 * Return: largst number
 */

int largest_number(int a, int b, int d)
{
	int largest;

	if (a >= b && b >= d)
	{
		largest = a;
	}
	else if (b >= a && b >= d)
	{
		largest = b;
	}
	else
	{
		largest = d;
	}

	return (largest);
}
