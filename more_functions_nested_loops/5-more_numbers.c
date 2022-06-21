#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print 0 to 9
 *
 * Return: character
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j / 10 > 0)
			{
				_putchar ((j / 10) + '0');
			}
		_putchar ((j % 10) + '0');
		}
		_putchar ('\n');
	}
}
