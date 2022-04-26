/**
 * _memset - function to fill memory with a constant byte
 *
 * @s: input to char type data
 * @b: inpute variable of char type
 * @n: unsigned int variable rep the number of bytes to be filled
 *
 * Return: A pointer to the filled memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		++i;
	}
	return (s);
}
