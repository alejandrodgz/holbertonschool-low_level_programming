#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - length of a string
 * @s: pointer
 * Return: length of string
 */

int _strlen(char *s)
{
	char *sp = NULL;
	int len;

	sp = s;
	len = strlen(sp);
	return (len);
}
