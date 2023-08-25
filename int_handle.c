#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "main.h"
/**
 * int_handle - Prints formatted output to stdout
 * @format: The format string
 * @..: Variable nuber of arguments.
 * Return: The number of charecters printed 
 */
int int_Handle(const char *format, ..)
{
	va_list pos;

	int b, neg, count = 0;

	if (format == NULL)
		return (-1);
	va_start(pos, format);
	for (b = 0; format && format[b] != '\0'; b++)
	{
		if (format[b] == 'd' || format[b] == 'i')
		{
			neg = va_arg(pos, int);
			count += print_number(neg);
		}
	}
	va_end(pos);
	return (count);
