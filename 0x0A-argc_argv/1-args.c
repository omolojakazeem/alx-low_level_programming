#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - main function
 * @argv: the argument values
 * @argc: the argument count
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	UNUSED(argv);
	printf("%d\n", argc - 1);

	return (0);
}
