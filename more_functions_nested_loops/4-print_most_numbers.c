#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - print 0 to 9
 *
 * Return: character
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		_putchar(i);
	}
	_putchar('\n');
}
