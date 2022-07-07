#include <stdio.h>
#include "main.h"

/**
 * _isdigit - return a value if digit
 *
 * @c: character to compute
 * Return: character
 */

int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
