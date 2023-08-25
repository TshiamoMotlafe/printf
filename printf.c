#include <stdarg.h>
#include<string.h>
#include <unistd.h>
#include "main.h"

int int_Handle(const char *format, ...);
int _printf(const char *format, ...);

/**
 * _printf - Prints formatted output to stdout
 * @format: The format string
 * @...: Variable number of arguments
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list lis;

	int m, num, dist, counter = 0;

	char chare, *strin;

	if (format == NULL)
		return (-1);

	va_start(lis, format);

	for (m = 0; format && format[m] != '\0'; m++)
	{
		if (format[m] != '%')
		{
			write(1, &format[m], 1);
			counter++;
		}
		else
		{
			m++;
			if (format[m] == '\0')
				return (-1);
			if (format[m] == 'c')
			{
				chare = va_arg(lis, int);
				write(1, &chare, 1);
				counter++;
			}
			else if (format[m] == 's')
			{
				strin = va_arg(lis, char *);
				if (strin == NULL)
					strin = "(null)";
				dist = strinlen(strin);
				write(1, strin, dist);
				counter += dist;
			}
			else if (format[m] == 'd' || format[m] == 'i')
			{
				num = va_arg(lis, int);
				counter += int_Handle(format + m, num);
				m++;
			else if (format[m] == '%')
			{
				write(1, &format[m], 1);
				counter++;
			}
		}
	}
	va_end(lis);
	return (counter);
}
