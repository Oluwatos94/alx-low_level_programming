#include "main.h"

/**
 * void print_number - prints the num from 0 - 9.
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int a;

	for (a == 0; a <= 9; a++)
		_putchar((a % 10) + '0');

	_putchar('\n');
}
