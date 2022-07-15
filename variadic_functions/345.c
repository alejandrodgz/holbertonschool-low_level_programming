
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
		if (ap == NULL)
			printf("(nil)");
		if (separator == NULL)
			printf("%s", va_arg(ap, char *));
		else
			printf("%s", va_arg(ap, char *));
		printf("%c", *separator);
	}
	if (ap == NULL)
		printf("(nil)");
	else
	printf("%s", va_arg(ap, char *));
	printf("\n");
	va_end(ap);
}
