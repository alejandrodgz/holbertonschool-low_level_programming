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
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
