#include <stdio.h>
#include <stdlib.h>

/**
 * fc_check - function to get/check args
 * @str: the args
 * Return: Always 0
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
			printf("Error\n");
			exit(EXIT_SUCCESS);
		}
		++str;
	}
	return (n * sign);
}

/**
 * main - main funciton
 * @argv: arguments value
 * @argc: arguments count
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i, sum = 0, a;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; ++i)
	{
		a = fc_check(argv[i]);
		if (a >= 0)
		{
			sum = sum + a;
		}
	}
	print("%d\n", sum);
	return (0);
}
