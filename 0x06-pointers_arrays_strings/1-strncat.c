/**
 * _strncat - function that concantenates n number of strings
 *
 * @dest: pointer to destination inpute
 * @src: pointer to source input
 * @n: most number of bytes from the source
 *
 * Return: @dest address
 */

char *_strncat(char *dest, char *src, int n)
{
	int csize, i;

	csize = 0;

	while (dest[csize])
	{
		csize++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[csize + i] = src[i];
	}
	dest[csize + i] = '\0';

	return (dest);
}
