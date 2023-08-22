#include<stdarg.h>
#include<unistd.h>
#include "main.h"
/**
 * _printf - Prints formatted output to stdout
 * @format: The format string
 * @...: Variable number of arguments
 * Return: The number of charecters printed
 */
int _printf(const char *format, ...)
{
	va_list args;

	int counter;

	va_start(args, format);
	counter = get_speci(format, args);
	va_end(args);

	return (counter);
}

