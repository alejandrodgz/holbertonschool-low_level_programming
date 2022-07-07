#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts - length of a string
 * @str: pointer
 * Return: length of string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
