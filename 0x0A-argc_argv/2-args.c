#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: count arguments
 * @argv: arguments
 * Return: Always 0 (succes)
 */
int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		/*while prints each arguments*/
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}

	return (0);
}