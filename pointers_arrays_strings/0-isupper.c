#include <stdio.h>
#include "main.h"

/**
 * _isupper - return a value if UPPER
 *
 * @c: character to compute
 * Return: character
 */

int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
