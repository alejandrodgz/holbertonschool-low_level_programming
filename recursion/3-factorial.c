#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * factorial - Write a function that prints a string,\
 * followed by a new line.
 *
 * @n: string to print
 * Return: strlen
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
