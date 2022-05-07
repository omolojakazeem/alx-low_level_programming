#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * fc_check - function
 * @str: the pointer to the str
 * Return: Always (0) Success
 */

int fc_check(const char *str)
{
	int n;
	int sign;

	n = 0;
	while (*str == ' ' || *str == '\t' || *str == '\v' || *str == '\r' ||
			*str == '\n' || *str == '\f')
	{
		++str;
	}
	sign = *str == '-' ? -1 : 1;
	if (sign == -1 || *str == '+')
	{
		++str;
	}
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			n = n * 10 + (*str - '0');
		}
		else
		{
			break;
		}
		++str;
	}
	return (n * sign);
}

/**
 * main - function
 * @argv: Function values
 * @argc: function count
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	UNUSED(argc);
	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	printf("%d\n", fc_check(argv[1]) * fc_check(argv[2]));
	return (0);
}

