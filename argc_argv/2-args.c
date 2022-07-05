#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Write a program that prints its name
 *
 * @argc: number of parameters
 * @argv: strings
 * Return: name of program
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
