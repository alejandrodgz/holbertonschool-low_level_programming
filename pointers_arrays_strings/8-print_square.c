#include <stdio.h>
#include "main.h"

/**
 * print_square - print a line with n c length
 *
 * @size: length
 * Return: character
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar ('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar (35);
		}
		_putchar ('\n');
		j = 0;
	}
}
