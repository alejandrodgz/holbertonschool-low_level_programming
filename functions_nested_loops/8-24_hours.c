#include "main.h"

/**
 * jack_bauer - prints sign of number
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int m = 00;
	int j = 00;
	int k = 00;

		do{
			if (m <= 9)
			{
				while ( j <= 5)
				{
					while (k < 9)
					{
						_putchar ('0');
						_putchar ('0' + m);
						_putchar ('0' + j);
						_putchar ('0' + k);
						_putchar ('\n');
						k++;
					}
					_putchar ('0');
					_putchar ('0' + m);
					_putchar ('0' + j);
					_putchar ('0' + k);
					_putchar ('\n');
					j++;
					k = 0;
				}
				m++;
				j = 0;
				_putchar ('0');
				_putchar ('0' + m);
				_putchar ('0' + j);
				_putchar ('0' + k);
				_putchar ('\n');
				k = 1;
			}
			_putchar ('0' + m);
			_putchar ('0' + j);
			_putchar ('0' + k);
			_putchar ('\n');
			k = 1;
		}while ( m < 24);
