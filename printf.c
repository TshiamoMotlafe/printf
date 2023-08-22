#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * handle_int - Handles the printing of  an integer to the stsout
 * @number: The integer to be printed
 *
 * Return: The total number of charecters printed
 */
int handle_int(int number)
{
	int extra = 0, counter = 0;

	char dig;

	if (number < 0)
	{
		write(1, " -", 1);
		number = -number;
		counter++;
	}
	if (number == 0)
	{
		write(1, "0", 1);
		counter++;
	} else
	{
		extra = 0;
		while (number > 0)
		{
			extra = (extra * 10) + number % 10;
			num /= 10;
		}
		while (extra > 0)
		{
			dig = '0' + extra % 10;
			write(1, &dig, 1);
			extra /= 10;
			counter++;
		}
	}
	return (counter);
}

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

	int m, dist, counter;

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
			} else if (format[m] == 'd' || format[m] == 'i')
			{
				number = va_arg(lis, int);
				counter += handle_int(number);
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
