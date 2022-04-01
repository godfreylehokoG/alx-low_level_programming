#include "main.h"

/**
 * main - check the code
 * @argc: size of argv array
 * @argv: array of arguments
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
