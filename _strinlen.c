#include "main.h"

/**
 * _strinlen - Checks the length of a string
 * @strinP: Collects a string pointer
 * Return: The number of string printed
 */
int _strinlen(char *s)
{
	int p = 0, number = 0;

	while (s[p] != 0)
	{
		number++;
		p++;
	}
	return (number);
}

