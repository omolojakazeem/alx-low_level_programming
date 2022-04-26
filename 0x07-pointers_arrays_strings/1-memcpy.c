/**
 * _memcpy - A function that copies memory area
 *
 * @dest: pointer to destination address
 * @src: pointer to source address
 * @n: number of char to copy
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
	}
	return (dest);
}
