#include "holberton.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times
 * Return:void
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

c = 'a';
while (i < 10)
	{
while (c <= 'z')
		{
_putchar(c);
c++;
		}
_putchar('\n');
i++;
	}
}
