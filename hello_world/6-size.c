#include <stdio.h>

/**
* main - Entry point
*
*
*Return: Always 0 (success)
*/

int main(void)
{
	printf("Size of a char: %ld byte(s)", sizeof(char));
	printf("Size of a int: %ld byte(s)", sizeof(int));
	printf("Size of a long int: %ld byte(s)", sizeof(long));
	printf("Size of a long long int: %ld byte(s)", sizeof(long long));
	printf("Size of a float: %ld byte(s)", sizeof(float));
	return (0);
}