#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts_recursion - Write a function that prints a string,\
 * followed by a new line.
 *
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		putchar('\n');
		return;
	}
	_putchar(s[i]);
	i++;
	_puts_recursion(s + i);
}
