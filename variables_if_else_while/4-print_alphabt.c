#include <stdio.h>
/**
 * main - Entry point
 *
 *Return: always 0
 */

int main(void)
{
	int a = 97;

	do {
		if (a == 101 || a == 113)
		{
			a = a + 1;
		continue;
		}
		putchar (a);
		a++;
	} while (a < 123);
	putchar ('\n');
	return (0);
}
