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
		putchar (i);
		putchar (44);
		putchar ('\t');
	}
	putchar ('\n');
	return (0);
}
