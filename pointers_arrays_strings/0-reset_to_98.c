#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - update value of a a variable
 * @n: pointer
 */

void reset_to_98(int *n)
{
	int *pn = NULL;

	pn = n;
	*pn = 98;
}
