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
	int len, m;

	len = strlen(str);
	m = len / 2;

	if (len % 2 != 0)
	{
		for (; m -1 < len; m++)
		{
			_putchar (str[m]);
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
