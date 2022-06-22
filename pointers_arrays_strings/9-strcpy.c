#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - every other character
 * @dest: dest
 * @src: number of elements to print
 * Return: length of string
 */

char *_strcpy(char *dest, char *src)
{
	int len, a, b;
	char tmp[2000];

	len = strlen(src);

	for (a = 0 ; a < len; a++)
	{
		tmp[a] = src[a];
	}
	for (b = 0; b < len; b++)
	{
		dest[b] = tmp[b];
	}

	return (dest);
}
