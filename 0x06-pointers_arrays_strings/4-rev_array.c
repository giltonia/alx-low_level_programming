#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int g;
	int r;

	for (g = 0; g < n--; g++)
	{
		r = a[g];
		a[g] = a[n];
		a[n] = r;
	}
}
