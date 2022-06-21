
#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - length of a string
 * @s: pointer
 * Return: length of string
 */

void print_rev(char *s)
{
	int len;

	len = strlen(s);
	for (len = len - 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
