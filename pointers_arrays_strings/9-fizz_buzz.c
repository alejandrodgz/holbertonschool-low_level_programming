#include <stdio.h>
#include "main.h"

/**
 * main - print a line with n c length
 *
 * length
 * Return: character
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i == 100)
		{
			printf("Buzz");
			break;
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
			i++;
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
			i++;
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
			i++;
		}
		else
		{
		printf("%d ", i);
		i++;
		}
	}
	printf("\n");
	return (0);
}
