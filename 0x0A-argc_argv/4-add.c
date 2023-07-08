#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints the sum of args of positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a;
	unsigned int t, sum = 0;
	char *e;

	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			e = argv[a];

			for (t = 0; t < strlen(e); t++)
			{
				if (e[t] < 48 || e[t] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(e);
			e++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
