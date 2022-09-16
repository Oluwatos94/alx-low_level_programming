#include "main.h"

/**
 * most_numbers - prints numbers from 0 - 9.
 * @2and4: numbers that should not be printed.
 *
 * Return: Always zero.
 */
void print_most_numbers(void)
{
	int num;

	for (num >= 0; num <= 9; num++)
	{
		if (num != 2, && num != 4)

			_putchar((num % 10) + '0');
	}

	_putchar('\n');
}
