/**
 * _strlen_recursion - function to get string lenght
 * @s: string
 * Return: Always 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
 * palindrome - function palindrome
 *
 * @s: chaine of the char
 * @taille: the number
 * @i: the numer
 * Return: Always 0
 */

int palindrome(char *s, int taille, int i)
{
	if (s[i] != '\0')
	{
		if (s[i] != s[taille - i])
		{
			return (0);
		}
		else
		{
			return (palindrome(s, taille, i + 1));
		}
	}
	else
	{
		return (1);
	}
}

/**
 * is_palindrome - fuction
 * @s: the chaine of the char
 * Return: Alwys 0
 */

int is_palindrome(char *s)
{
	if (s[0] == '\0')
	{
		return (1);
	}
	else
	{
		return (palindrome(s, _strlen_recursion(s) - 1, 0));
	}
}
