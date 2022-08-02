#include "main.h"

/**
 * binary_to_uint - binary to decimal
 * @b: string of binary number 
 * Return: decimal number
 *
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, y, e = 0, d, base = 1;

	if (b == NULL)
		return(0);
	while (b[i] != '\0')
	{
		if ((b[i] > 61))
		{
			return (0);
		}
		i++;
	}
	y = atoi(b);
	while (y > 0)
	{
		d = y % 10;
		e = e + d * base;
		y = y / 10;
		base = base * 2;
	}
	return (e);
}
		
		


