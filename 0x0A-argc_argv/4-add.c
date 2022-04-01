#include "main.h"

/**
 * main - check the code
 * @argc: size of argv array
 * @argv: array of arguments
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int i, sum;

	if (argc > 0)
	{
		for (i = 1; argv[i] > 0; i++)
		{
			sum += atoi(argv[i]);
			printf("%d\n", sum);
		}
		return (0);
	}
	printf("Error\n");
	return (1);
}
