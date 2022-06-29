#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strstr - fills memory with a constant byte
 *
 * @haystack: ointed area to fill
 * @needle: what to fill
 *
 * Return: pointer to the memory area
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, len, j = 0, tmp = 0;
	char *p;

	len = strlen(needle);
	len2 = strlen(haystack);

	for (i = 0; i <= len; i++)
	{
		while (j < len2)
		{
			if ((needle[i] == haystack[j] && needle[i] != '\0') && haystack[j] != '\0')
			{

				p = &haystack[j];
				tmp = tmp + 1;
				i++;
				j++;
			}
			else
			{
				j++;
			}
		}
		j = 0;
		if (tmp == len)
		{
			return (p - (len - 1));
		}
	}
	return (NULL);
}
