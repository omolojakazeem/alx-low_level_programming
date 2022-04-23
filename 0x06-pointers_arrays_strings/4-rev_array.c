/**
 * reverse_array - a function to reverse the elements of an array
 *
 * @a: pointer to the array
 * @n: number of elements to swap
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int tmp, s, e;

	s = 0;
	e = n - 1;

	while (s < e)
	{
		tmp = a[s];
		a[s] = a[e];
		a[e] = tmp;
		s++;
		e--;
	}
}
