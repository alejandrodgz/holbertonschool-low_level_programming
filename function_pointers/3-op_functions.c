#include "3-calc.h"

/**
 * op_add - entry
 * @a: a
 * @b: b
 * Return: return
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - entry
 * @a: a
 * @b: b
 * Return: return
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - entry
 * @a: a
 * @b: b
 * Return: return
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - entry
 * @a: a
 * @b: b
 * Return: return
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - entry
 * @a: a
 * @b: b
 * Return: return
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error");
		return(100);
	}
	return (a % b);
}
