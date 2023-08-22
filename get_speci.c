#include<stdarg.h>
#include<unistd.h>
#include "main.h"
/**
 *  get_speci - Handles conversion specifiers for printf
 *  @format: The format string
 *  @agrgs: The variable argument list
 *  Return: The number of charecters printed
 */

int get_speci(const char *format,va_list args)
{
	int counter = 0;

	char chare, *c;

	while (*format)
	{
		if (*format == '%')
		{
		format++;
		switch (*format)
		{
		case 'c':
		chare = va_arg(args, int);
		putchar(chare);
		counter++;
		break;
		case 's':
		*c = va_arg(args, int);
		c++;
		counter++;
		break;
		case '%':
		putchar('%')
		counter++;
		break;
		default:
		putchar(*format);
		counter++;
		}
		}
	}
	return (counter);
}
