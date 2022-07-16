#include "variadic_functions.h"

/**
 * printc - s
 * @ap: a
 *
 *
 *
 */

void printc(va_list ap)
{
		printf("%c", va_arg(ap, int));
}

/**
 * printi - s
 * @ap: list
 *
 *
 *
 *
 */

void printi(va_list ap)
{
		printf("%d", va_arg(ap, int));
}

/**
 * printfo - a
 * @ap: list
 *
 *
 */

void printfo(va_list ap)
{
		printf("%f", va_arg(ap, double));
}

/**
 *prints - s
 * @ap: list
 *
 *
 *
 */

void prints(va_list ap)
{
	char *s;

	s = va_arg(ap, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
		printf("%s", s);
}

/**
 * print_all - entry
 * @format: number of arguments
 *
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int j, i = 0;
	char *sep = "";
	tipe are[] = {
		{'c', printc},
		{'i', printi},
		{'f', printfo},
		{'s', prints},
		{'\0', NULL}
	};

	va_start(ap, format);
	while (format[i] != '\0')
	{
		j = 0;
		while (are[j].tipe1 != '\0')
		{
			if (are[j].tipe1 == format[i])
			{
				printf("%s", sep);
				are[j].f(ap);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
