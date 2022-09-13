#include "main.h"

/**
 * main - prints alphabets in lowercase, followed by a new line.
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char book;

	for (book = 'a'; book <= 'z'; book++)
		_putchar(book);


	_putchar('\n');
}
