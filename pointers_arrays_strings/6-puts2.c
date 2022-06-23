#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - every other character
 * @str: pointer
 * Return: length of string
 */

void puts2(char *str)
{
	int a, len;

	len = strlen(str);

	for (a = 0; a < len; a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
