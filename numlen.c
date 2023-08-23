#include "main.h"

/**
 * numlen - Calculates the number of digits in an integer
 * @n: The integer to count digits for
 * Return: The number of digits in n
 */

int numlen(int n)
{
	int len = 0;

	if (n == 0)
	{
		return (1);
	}

	while (n != 0)
	{
		n /= 10;
		len++;
	}

	return (len);
}
