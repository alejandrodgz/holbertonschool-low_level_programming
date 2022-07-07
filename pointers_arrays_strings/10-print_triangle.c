#include <stdio.h>
#include "main.h"

/**
 * print_triangle - print a line with n c length
 *
 * @size: length
 * Return: character
 */

void print_triangle(int size)
{
	int i, j, k;

	i = 0;
	j = 0;
	k = 1;
	if (size <= 0)
	{
		_putchar('\n');
	}
	while (i < size)
	{
		while (j <= i)
		{
			while (k < (size - i))
			{
				_putchar(32);
				k++;
			}
			_putchar(35);
			j++;
		}
		_putchar('\n');
		i++;
		j = 0;
		k = 1;
	}
}
