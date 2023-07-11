#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of char
 * @size: The size of the array
 * @c: The char to fill the array
 *
 * Return: pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	unsigned int d;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (d = 0; d < size; d++)
	{
		s[d] = c;
	}

	return (s);
}
