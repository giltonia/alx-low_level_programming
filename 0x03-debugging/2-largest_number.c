#include "main.h"

/**
* largest_number - returns the largest of 3 numbers
* @a: first integer
* @b: second integer
* @c: third integer
* Return: largest number
*/

int largest_number(int t, int i, int n)
{
	int largest;

	if (t > i && t > n)
	{
		largest = t;
	}
	else if (t > i && n > t)
	{
		largest = n;
	}
	else if (i > n)
	{
		largest = i;
	}
	else
	{
		largest = n;
	}
	return (largest);
}
