#include "main.h"

/**
 * _islower - prints lowercase alphabet x10
 * @c: parameter
 * Return: 0
 */

int _islower(int c)
{
	if (c > 97 && c < 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
