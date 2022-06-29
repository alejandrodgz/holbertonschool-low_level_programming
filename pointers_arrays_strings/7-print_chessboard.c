#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_chessboard - fills memory with a constant byte
 *
 * @a: ointed area to fill
 *
 * Return: pointer to the memory area
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8 ; i++)
	{

		for (j = 0; j < 8; j++)
		{
			_putchar (a[i][j]);
		}
		_putchar('\n');
	}
}
