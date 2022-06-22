#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - every other character
 * @str: pointer
 * Return: length of string
 */

void puts_half(char *str)
{
	int len, m, n;

	len = strlen(str);
	n = (len - 1) / 2;
	m = len / 2;

	if (len % 2 != 0)
	{
		for (; n < len - 1; n++)
		{
			_putchar (str[n]);
		}
	}
	else if (len % 2 == 0)
	{
		for (; m < len; m++)
		{
			_putchar (str[m]);
		}
	}

	_putchar('\n');
}
