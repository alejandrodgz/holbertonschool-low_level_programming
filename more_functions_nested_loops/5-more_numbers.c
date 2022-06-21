#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print 0 to 9
 *
 * Return: character
 */

void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (j < 10)
	{
		while (i < 15)
		{
			if (i < 10)
			{
				_putchar('0' + i);
				i++;
			}
			else
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				i++;
			}
		}
		_putchar('\n');
		i = 0;
		j++;
	}
}
