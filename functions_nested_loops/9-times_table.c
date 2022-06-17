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

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			b = i * j;

			if (j == 0)
			{
			_putchar ('0' + b);
			}

			else if (b <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + b);
			}
			else if (b > 9)
			{
			_putchar(',');
			_putchar(' ');
			_putchar('0' + (b / 10));
			_putchar('0' + (b % 10));
			}
		}
		_putchar ('\n');
	}
}
