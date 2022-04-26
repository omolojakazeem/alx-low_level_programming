/**
 *  _strspn - A function that returns the lenght of a substring
 * @s: string pointet
 * @accept: substring
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;
		k = 1; /* used as flag */
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				k = 0;
				break;
			}
			++j;
		}
		if (k == 1)
		{
			break;
		}
		++i;
	}
	return (i);
}
