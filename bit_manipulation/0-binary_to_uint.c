#include "main.h"

/**
 * binary_to_uint - binary to decimal
 * @b: string of binary number
 * Return: decimal number
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int m = 0;
	int i = 0, n = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if ((b[i] > 61))
		{
			return (0);
		}
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		if (b[i] == '1')
		{
			m = m + (1 << n);
		}
		n++;
		i--;

	}
	return (m);
}
