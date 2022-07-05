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
	int i, j, c, sum = 0;

	for (j = 1; j < argc; j++)
	{
		if (!(*argv[j] > 47 && *argv[j] < 58))
		{
			printf("Error\n");
			return (1);
		}
	}
	for (i = 1; i < argc; i++)
	{
		c =  atoi(argv[i]);
		sum += c;
	}
	printf("%d\n", sum);
	return (0);
}
