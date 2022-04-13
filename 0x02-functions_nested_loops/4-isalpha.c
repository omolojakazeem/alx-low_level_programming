#include "main.h"
/**
 * _isalpha - check if an inpute is alphabetic
 * @c: letter input
 * Return: 1 if c is alphabet 0 if else
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
