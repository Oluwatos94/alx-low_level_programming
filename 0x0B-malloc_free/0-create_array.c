#include "main.h"

/**
 * *create_array - creates an array of chars
 * @size: arrays created
 * @c: character in which size is initialized to.
 * Return: Always 0 (succes)
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}

	/*define values with malloc*/
	buffer = (char *) malloc(size * sizeof(c));

	if (buffer == 0)
	{
		return (NULL);
	}
	else
	{
		position = 0;
		while (position < size)/*while for arrray*/
		{
			*(buffer + position) = c;
			position++;
		}
		return (buffer);
	}
}
