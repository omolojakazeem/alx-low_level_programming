#include "main.h"

/**
 * _islower - Checks if an input is lowercase
 *
 * Return: (0) - is lower (1) if not
 * @i: Integert parameter
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

