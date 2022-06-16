#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>

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

#endif
