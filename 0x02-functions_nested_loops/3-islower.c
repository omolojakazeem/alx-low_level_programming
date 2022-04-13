#include "main.h"

/**
 * _islower - Checks if an input is lowercase
 *
 * return: 0 - is lower 1 - if not
 */
int _islower(int i)
{
	if (i >= 97 && i <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

