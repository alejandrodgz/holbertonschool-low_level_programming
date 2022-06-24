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

void reverse_array(int *a, int n)
{

	int i, j;
	int tmp[2000];

	i = 0;
	j = 0;
	while(i < n)
	{
		tmp[i] = a[i];
		i++;
	}
	while (i >= 0 && j < n)
	{
		i--;
		a[j] = tmp[i];
		j++;
	}
}
