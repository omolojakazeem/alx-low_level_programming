#include "main.h"

/**
 * _islower - Checks if an input is lowercase
 *
 * return: 0 - is lower
 * return: 1 - if not
 * i - Integert parameter
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

