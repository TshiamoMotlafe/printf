#include "main.h"

/**
 * _strinlen - Checks the length of a string
 * @strinP: Collects a string pointer
 * Return: The number of string printed
 */
int _strinlen(char *strinP)
{
	int p = 0, number = 0;

	for (p; strinP[p] != 0; p++)
	{
		number++;
	}
	return (number);
}

