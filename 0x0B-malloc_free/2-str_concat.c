#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two stings of any size
 * @s1: the first string to concatenate
 * @s2: rhe second string to concatenate
 *
 * Return: the two concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, g = 0, d = 0, f = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[g])
		g++;

	f = i + g;
	s = malloc((sizeof(char) * f) + 1);

	if (s == NULL)
		return (NULL);

	g = 0;

	while (d < f)
	{
		if (d <= i)
			s[d] = s1[d];

		if (d >= i)
		{
			s[d] = s2[g];
			g++;
		}

		d++;
	}

	s[d] = '\0';
	return (s);
}
