#include "main.h"

/**
 * put2 - prints every other character of string
 * @str: string
 */

void puts2(char *str)
{
	int b;

	b = 0;
	while (str[b] != '\0')
	{
		if (b % 2 == 0)
			_putchar(str[b]);
		b++;
	}
	_putchar('\n');
}
