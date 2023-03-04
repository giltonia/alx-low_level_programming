#include <stdio.h>
/**
 * main - entry point
 * Description: 'prints all possible different combinations of two digits'
 * Return: always 0
 */
int main(void)
{
int s, num1, num2;
s = 0;
while (s <= 90)
{
num1 = s / 10;
num2 = s % 10;
if (num1 >= num2)
{
s++;
continue;
}
putchar(num1 + '0');
putchar(num2 + '0');
if (s != 89)
{
putchar(',');
putchar(' ');
}
s++;
}
putchar('\n');
return (0);
}
