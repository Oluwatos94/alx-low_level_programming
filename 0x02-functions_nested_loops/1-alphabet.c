#include "main.h"

/**
 * main - prints alphabets in lowercase, followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	char book = 'a';

	while (book <= 'z')
	{
		putchar(book);
		book++;

	}
	_putchar('\n');
}
