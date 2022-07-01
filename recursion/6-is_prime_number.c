
#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_prime_number - Write a function that prints a string,\
 * followed by a new line.
 *
 * @n: string to print
 * @i: another
 * Return: strlen
 */

int prime(int n, int i);

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));

}

/**
 * prime - Write a function that prints a string,\
 * followed by a new line.
 *
 * @n: string to print
 * @i: another
 * Return: strlen
 */

int prime(int n, int i)
{
	if (i >= n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	return (prime(n, i + 1));
}
