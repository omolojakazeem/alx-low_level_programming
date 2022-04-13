#include "main.h"

/**
 * Main - Entry point
 *
 * Description: Prints _putchar using putchar prototypr
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch[8] = "_putchar";
	int i = 0;

	while (i <= 8)
	{
		_putchar(ch[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
