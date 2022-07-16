#ifndef V_MAIN
#define V_MAIN
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

void printc (va_list);

void printi (va_list);

void printfo (va_list);

void prints (va_list);

typedef struct tipe
{
	char tipe1;
	void (*f)(va_list ap);
} tipe;

#endif
