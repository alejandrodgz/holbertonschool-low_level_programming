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

/**
 * reset_to_98 - reset vable to 98
 * @n: parameter
 */

void reset_to_98(int *n);

/**
 * swap_int - update value of a a variable
 * @a: pointer
 * @b: pointer
 */

void swap_int(int *a, int *b);

/**
 * _strlen - length of a string
 * @s: pointer
 * Return: length of string
 */

int _strlen(char *s);

/**
 * _puts - length of a string
 * @str: pointer
 * Return: length of string
 */

void _puts(char *str);

/**
 * print_rev - length of a string
 * @s: pointer
 * Return: length of string
 */

void print_rev(char *s);

/**
 * rev_string - length of a string
 * @s: pointer
 * Return: length of string
 */

void rev_string(char *s);

/**
 * puts2 - every other character
 * @str: pointer
 * Return: length of string
 */

void puts2(char *str);

/**
 * puts_half - every other character
 * @str: pointer
 * Return: length of string
 */

void puts_half(char *str);

#endif
