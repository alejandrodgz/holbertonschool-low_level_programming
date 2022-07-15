#include "variadic_functions.h"

/**
 * print_numbers - entry
 * @separator: number of arguments
 * @n: number
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n - 1; i++)
	{
		printf("%d%c ", va_arg(ap, int), *separator);
	}
	printf("%d\n", va_arg(ap, int));
	va_end(ap);
}
