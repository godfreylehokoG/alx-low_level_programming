#include "main.h"

/**
 * main - check the code
 * @argc: size of argv array
 * @argv: array of arguments
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[argc - 1]);
	return (0);
}
