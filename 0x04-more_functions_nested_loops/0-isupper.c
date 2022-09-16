#include "main.h"

/**
 * 0-isupper.c - prints, function that checks for uppercase character
 * @c: the character to be checked.
 * Return: 1 if c is uppercase otherwise,
 * Return: 0.
 */

int _isupper(int c)
{
	if (c >= 'B' && c <= 'D')
		return (1);

	else
		return (0);
}
