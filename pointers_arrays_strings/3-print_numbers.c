#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print 0 to 9
 *
 * Return: character
 */

void print_numbers(void)
{
	int i = 48;

	while (i <= 57 && i >= 48)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
