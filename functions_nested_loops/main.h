 #ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @int: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

int _putchar(int);

/**
 * print_alphabet - print the alphabet lowercase but is fucking hard to get it
 */

void print_alphabet(void);

/**
 * void print_alphabet_x10 - Write a function that prints 10 times the alphabet
 */

void print_alphabet_x10(void);

/**
 * _islower - Return 1 if c is an a lowercase character
 * @c: is the character
 * Return: o if is no lowercase char
 */

int _islower(int c);

/**
 * _isalpha -  checks for alphabetic character
 *  @c: is the character
 *  Return: o if is no lower/uppercase char
 */

int _isalpha(int c);

/**
 * print_sign - checks for signs in numbers
 * @n: number to check
 * Return: 1, -1, 0 depends on the sign
 */

int print_sign(int n);

/**
 * _abs - absolut value of an integer
 * @int: integer to compute
 * Return: absolut value
 */

int _abs(int);

/**
 * print_last_digit - print last digit
 * @int: the number to compute
 * Return: last digit
 */

int print_last_digit(int);

/**
 * jack_bauer - print every minute
 *
 */

void jack_bauer(void);

/**
 * times_table - print times 9 table
 */

void times_table(void);

/**
 * add - addition
 * @a: first number
 * @b: second number
 * Return: result
 */

int add(int, int);

#endif
