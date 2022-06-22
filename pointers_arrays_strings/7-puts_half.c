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
	for (m = len / 2; m <= len; m++ )
	{
		_putchar (str[m]);
	}
	_putchar('\n');
}
