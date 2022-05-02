#include <stdio.h>

/**
 * main - the main function
 *
 * @argv: argument values
 * @argc: count of arguments
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		++i;
	}
	return (0);
}
