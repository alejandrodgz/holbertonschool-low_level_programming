#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - print a line with n c length
 *
 * @n: length
 * Return: character
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar (32);
		}
		_putchar (92);
		_putchar ('\n');
		j = 0;
	}
}
