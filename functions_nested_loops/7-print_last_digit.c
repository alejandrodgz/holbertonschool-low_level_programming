#include "main.h"

/**
 * print_last_digit - prints sign of number
 * @n: parameter to have in mind
 * Return: 0
 */

int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;

	_putchar('0' + (n % 10));
	return n % 10;
}
