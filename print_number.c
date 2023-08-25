#include "main.h"
/**
 * print_number - Prints an integer to stdout
 * @n: The integer to be printed
 */
void print_number(int n)
{
	char digit;

	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);

	digit = '0' + n % 10;

	write(1, &digit, 1);

}
