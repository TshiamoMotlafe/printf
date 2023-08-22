#ifndef MAIN_H
#define MAIN_H

#include<stdarg.h>

/**
 * _printf - Prints formatted output to stdout
 * @format: The format string
 * @...: Variable number of arguments
 * Return: The number of characters orinted 
 */
int _printf(const char *format, ...);

/**
 * get_speci - Handles conversin specifiers for printf
 * @format:  The format string
 * @args: The variable arguments list
 * Return: The number of charecters printed
 */
int get_speci(const char *format,va_list args);

#endif /* MAIN_H */
