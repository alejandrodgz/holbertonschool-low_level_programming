#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	char s[] = "Best school";
	printf("%lu\n", sizeof(s));
	printf("%lu\n", strlen(s));
	printf("%lu\n", strlen("best school"));
	printf("%lu\n", sizeof("best school"));
}
