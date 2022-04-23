/**
 * _strcat - function to concantenate 2 strings
 *
 * @dest: destination input pointer
 * @src: source input pointer
 *
 * Return: pointer to resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int csize, csize2;

	c = 0;
	while (dest[c])
	{
		csize++;
	}
	for (csize2 = 0; src[csize2]; csize2++)
	{
		dest[csize++] = src[csize2];
	}
	return (dest);
}
