#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _atoi - every other character
 * @s: pointer
 * Return: length of string
 */

int _atoi(char *s)
{
	int a, len;

	len = strlen(s);

	for (a = 0; a < len; a += 2)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
    return (1);
}