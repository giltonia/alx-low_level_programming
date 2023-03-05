#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times.
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	int circle = 0;
	char myLetter = 'a';

	while (circle < 10)
	{
		myLetter = 'a';
		while (myLetter <= 'z')
		{
			_putchar(myLetter);
			myLetter++;
		}
		_putchar('\n');

		circle++;
	}
}
