#include "main.h"

/**
 * main - check the code
 * @argc: size of argv array
 * @argv: array of arguments
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	if (**argv)
		printf("%d\n", argc - 1);
	return (0);
}
