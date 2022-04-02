#include "main.h"

/**
 * isnumber - checks str if is number
 * @s: str to check if isnumber
 * Return: 1 if is number 0 if not
 */

int isnumber(char *s)
{
	if (*s > 47 && *s < 58)
		return (1);
	return (0);
}

/**
 * main - check the code
 * @argc: size of argv array
 * @argv: array of arguments
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int sum, i = 0;

	if (argc >= 0)
	{
		for (i = 1; i < argc; i++)
		{
			if (isnumber(argv[i]) != 1)
			{
				printf("Error\n");
				return (-1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
