#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print 0 to 9
 *
 * Return: character
 */

void more_numbers(void)
{
	int i = 48;
	int j = 0;

	while (j < 10)
	{
		while (i <= 57 && i >= 48)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		i = 0;
		j++;
	}
}
