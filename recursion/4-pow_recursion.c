#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _pow_recursion - Write a function that prints a string,\
 * followed by a new line.
 *
 * @x: string to print
 * @y: y times x
 * Return: strlen
 */

int _pow_recursion(int x, int y)
{
	if (x == 0 || y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
