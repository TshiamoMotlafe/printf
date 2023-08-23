#ifndef MAIN_H
#define MAIN_H

/**
 * _printf - Prints formatted output to stdout
 * @format: The format string
 * @...: Variable number of arguments
 * Return: The number of characters orinted
 */
int _printf(const char *format, ...);

/**
 * strinlen - Checks the length of a string
 * @s: Collects a string pointer
 * Return: The number of string printed
 */
int strinlen(char *s);

/**
 * numlen - Calculates the number of digits in an integer
 * @n: The integer to count digits for
 * Return: The number of digits in n
 */
int numlen(int n);

/**
 * print_number - Prints an integer to stdout
 * @n: The integer to be printed
 */
void print_number(int n);

#endif /* MAIN_H */
