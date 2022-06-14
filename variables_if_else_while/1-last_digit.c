#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int a;

	a = n % 9;
	if (a > 5)
	{
		printf("%d and is greater than 5\n", a);
	}
	else if (a == 0)
	{
		printf("%d and is 0\n", a);
	}
	else if (a < 6 && a != 0)
	{
		printf("%d and is less than 6 and not 0\n", a);
	}
	return (0);
}
