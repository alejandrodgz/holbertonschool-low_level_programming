#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn - concatenates n bytes from src to dest
 * @s: destination string
 * @accept: number of elements to print
 * Return: length of string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	if(s[i] == accept[i])
		return (i);
	return (i + 1);
}
