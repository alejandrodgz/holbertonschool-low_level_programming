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
	char *s;

	if (n == 0)
	{
		printf("\n");
		exit(0);
	}
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		if (s == NULL)
			printf("(nil)");
		else
		{
			if (separator == NULL)
			{
				printf("%s", s);
			}
			else
			{
			printf("%s", s);
			printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(ap);
}
