#include <stdarg.h>
#include <unistd.h>
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

	va_start(lis, format);

	if (format == NULL)
		return (-1);
	for (m = 0; format[m] != '\0'; m++)
	{
		if (format[m] == '%')
		{
		write(1, format, 1);
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
			write(1, format, 1);
			counter++;
			}
			else if (format[m] == 's')
			{
			strin = va_arg(lis, char *);
				write(1, format, 1);
				if (strin == NULL)
					strin = "NULL";
				dist = _strinlen(strin);
				write(1, format, 1);
				counter += dist;
			}
			else if (format[m] == '%')
			{
				write(1, format, 1);
				counter++;
			}
		}
	}
	va_end(lis);
	return (counter);


}
