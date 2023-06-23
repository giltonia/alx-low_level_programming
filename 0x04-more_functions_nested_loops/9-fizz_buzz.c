#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
 */
int main(void)
{
	int g;

	for (g = 1; g <= 100; g++)
	{
		if (g % 3 == 0 && g % 5 != 0)
		{
			printf(" Fizz");
		} else if (g % 5 == 0 && g % 3 != 0)
		{
			printf(" Buzz");
		} else if (g % 3 == 0 && g % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (g == 1)
		{
			printf("%d", g);
		} else
		{
			printf(" %d", g);
		}
	}
	printf("\n");

	return (0);
}
