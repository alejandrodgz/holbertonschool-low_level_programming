#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - every other character
 * @dest: dest
 * @src: number of elements to print
 * Return: length of string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
