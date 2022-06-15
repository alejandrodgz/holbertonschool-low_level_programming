#include <stdio.h>
/**
 * main - Entry point
 *
 *Return: always 0
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == 57)
		{
			putchar (i);
			i++;
			continue;
		}

		putchar (i);
		putchar (44);
		putchar (32);
	}
	return (0);
}
