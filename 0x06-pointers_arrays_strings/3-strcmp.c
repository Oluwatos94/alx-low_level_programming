#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: string one to be compared.
 * @s2: string two to be compared.
 * Return: if str1 < str2, the negative difference.
 * if str1 == str2, 0.
 * if str1 > str2, positive difference.
 */
int _strcmp(char *s1, char *s2)
{
	char *str_one = s1;
	char *str_two = s2;

	while (*str_one != '\0' && *str_two != '\0' && *str_one == *str_two)
	{
		*str_one++;
		*str_two++;
	}

	return (*str_one - *str_two);
}

