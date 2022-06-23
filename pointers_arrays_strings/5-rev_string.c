#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - every other character
 * @s: dest
 *
 * Return: length of string
 */

void rev_string(char *s)
{
	int len, a, b, c;
	char tmp[2000];

	len = strlen(s);

	for (a = 0 ; a < len ; a++)
	{
		c = (len - 1) - a;
		tmp[c] = s[a];
	}
	for (b = 0; b < len; b++)
	{
		s[b] = tmp[b];
	}

}
