#ifndef MAIN_H
#define MAIN_H

/**
 * _isupper - evalue if c is UPPER
 *
 * @c: character
 *
 * Return: 1 if Upper
 */

int _isupper(int c);

/**
 * _isdigit -evaluates if c is digit
 *
 * @c: ifidigit
 *
 * Return: 1 if digit
 */

int _isdigit(int c);

/**
 * mul - multipication
 *
 * @a: digit 1
 * @b: digit 2
 *
 * Return: result
 */

int mul(int a, int b);

/**
 * print_numbers - print 0 - 9
 *
 * Return: nothing
 */

void print_numbers(void);

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c);

/**
 * print_most_numbers - print all number except 2,4
 *
 * Return: print
 */

void print_most_numbers(void);

/**
 * more_numbers - again
 *
 * Return: again
 */

void more_numbers(void);

/**
 * print_line- print a line with n c length
 *
 * @n: length
 * Return: character
 */

void print_line(int n);

void print_diagonal(int n);

void print_square(int size);

void print_triangle(int size);

#endif
