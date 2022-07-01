#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen_recursion - Write a function that prints a string,\
 * followed by a new line.
 *
 * @s: string to print
 * Return: strlen
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 +  _strlen_recursion(s + 1));
	}
	return (0);
}
