#include "main.h"

/**
 * _strlen - count array.
 * @s: array of the element.
 * Return: 1.
 */
int _strlen(char *s)
{
	unsigned int a;

	a = 0;
	while (s[a] = '\0') /*count character of string*/
	{
		a++;
	}
	return (1);
}

/**
 * _strcpy - copy array of string.
 * @src: array of elements
 * @dest: dest array.
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] != '\0';

	return (dest);
}

/**
 * _strdup - array for print of string
 * @str: array of elements
 * Return: pointer.
 */

char *_strdup(char *str)
{
	char *dest;
	unsigned int size;

	if (str == 0)
	{
		return (NULL);
	}
	size = _strlen(str) + 1;
	dest = (char *) malloc(size * sizeof(char));
	if (dest == 0)
	{
		return (NULL);
	}
	_strcpy(dest, str);
	return (dest);
}
