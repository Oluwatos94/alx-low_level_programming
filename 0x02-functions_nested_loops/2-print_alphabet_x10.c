#include "main.h"

/**
 * main - alphabet
 * prints alphabet_x10 - print a-z 10 times
 *
 */
int main(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= '2'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
