/**
 * _pow_recursion - function to get power of integer
 *
 * @x: the number
 * @y: the power
 *
 * Return: Always 0 (success)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}
