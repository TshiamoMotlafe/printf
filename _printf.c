#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int char_count = 0;

	while (*format != '\0')
	{
		if (*format == ' % ')
		{
			format++;  /*Move past '%*/'
			if (*format == '\0')  /*Handle edge case of ' % ' at end of format*/
				break;

			/* Handle conversion specifiers*/
			if (*format == 'c')
			{
				char c = (char)va_arg(args, int);
				write(1, &c, 1);
				char_count++;
			} else if (*format == 's')
				{
				const char *s = va_arg(args, const char *);
				while (*s != '\0')
				{
					write(1, s, 1);
					s++;
					char_count++;
					}
			} else if (*format == ' % ') {
				write(1, "%", 1);
				char_count++;
				}
		 else {
				write(1, format, 1);
				char_count++;
		}

		format++;
	}

	va_end(args);
	return char_count;
}
