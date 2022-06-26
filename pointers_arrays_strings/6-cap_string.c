#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * cap_string - from lowercase to uppercase
 * @s: number of bytes
 * Return: s upper
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if(s[i] >= 97 && s[i] <= 122)
		{
			if ((s[i - 1] >= 32 && s[i - 1] <= 47) || (s[i - 1] >= 58 && s[i - 1] <= 64) || (s[i - 1] >= 123 && s[i - 1] <= 126) || (s[i - 1] == '\t' || s[i - 1] == '\n') )
			{
				s[i] = s[i] - 32;
			}
		}
	}
	return (s);
}
