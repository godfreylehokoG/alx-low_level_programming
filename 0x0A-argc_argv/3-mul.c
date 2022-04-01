#include "main.h"

/**
 * main - check the code
 * @argc: size of argv array
 * @argv: array of arguments
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int sum;

	if (argc > 2)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
		return (0);
	}
	printf("Error\n");
	return (1);
}
