#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - concatenates n bytes from src to dest
 * @dest: destination string
 * @src: number of elements to print
 * @n: number of bytes
 * Return: length of string
 */

char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
