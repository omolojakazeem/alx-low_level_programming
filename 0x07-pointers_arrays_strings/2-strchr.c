/**
 * _strchr - Function to return the first occurence of a char of a string
 * @s: pointer to a string input
 * @c: character to search
 *
 * Return: first occurence of the char or null if not found
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
		{
			return ('\0');
		}
		++s;
	}
}
