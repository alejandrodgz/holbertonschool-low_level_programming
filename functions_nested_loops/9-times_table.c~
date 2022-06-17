#include "main.h"

/**
 * jack_bauer - prints sign of number
 *
 * Return: 0
 */

void times_table(void)
{
	int i = 0;
	int j = 0;
	int b = 0;

	for (i=0; i < 10; i++)
	{
		j = 0;
		for (j=0; j < 10; j++)
		{
			b = i * j;
		}

		if (i == 0)
		{
			putchar ('0' + b);
		}

		else if ( b <= 9)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + b);
		}
		else if ( b > 9)
		{
			_putchar(',');
			_putchar(' ');
			_putchar('0' + (b / 10));
			_putchar('0' + (b % 10));
		}
	}
	_putchar ('\n');
}
