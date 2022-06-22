#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - update value of a a variable
 * @n: pointer
 */


void reset_to_98(int *n)
{
	int *p;
	p = n;
	*p = 98;
}

int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);
}
