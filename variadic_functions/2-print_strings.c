#include "variadic_functions.h"

/**
 * print_strings - entry
 * @separator: number of arguments
 * @n: number
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	if (n == 0)
	{
		printf("\n");
		exit(0);
	}
	va_start(ap, n);
	for (i = 0; i < n - 1; i++)
	{
		if (separator == NULL)
		{
			printf("%s", va_arg(ap, char *));
		}
		else if (*separator == '\0')
		{
			printf("%s", va_arg(ap, char *));
		}
		else
			printf("%s%c ", va_arg(ap, char *), *separator);
	}
	printf("%s\n", va_arg(ap, char *));
	va_end(ap);
}
