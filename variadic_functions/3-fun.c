#include "variadic_functions.h"

/**
 * printc - s
 * @a: a
 *
 *
 *
 */

void printc (va_list ap)
{
		printf("%c", va_arg(ap, char));
}

/**
 * printi - s
 * @ap: list
 *
 *
 *
 *
 */

void printi (va_list ap)
{
		printf("%d", va_arg(ap, int));
}

/**
 *
 * printf - a
 * @ap: list
 *
 *
 */

void printfo (va_list ap)
{
		printf("%f", va_arg(ap, double));
}

/**
 *
 *prints - s
 * @ap: list
 *
 *
 *
 */

void prints (va_list ap)
{
	char *s;

	s = va_arg(ap, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	else
		printf("%s", s);
}
