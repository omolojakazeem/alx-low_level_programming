#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - function
 *
 * @argc: the number of arguments
 * @argv: the values of arguments
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	UNUSED(argc);
	print("%s\n", argv[0]);

	return (0);
}
