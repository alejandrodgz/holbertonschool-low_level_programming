#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - addition
 *
 * @n: first number
 *
 * Return: addition
 */

void print_to_98(int n)
{
	int c;

	for (c = 98; n > c;)
	{
		if (n == 98)
		{
			printf("%d ", n);
			n--;
		}
		else
		{
			printf("%d, ", n);
		n--;
		}
	}
	for (c = 98; n <= c;)
	{
		if (n == 98)
		{
			printf("%d ", n);
			n++;
		}
		else
		{
		printf("%d, ", n);
		n++;
		}
	}
	printf("\n");
}
