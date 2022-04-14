#include "3-calc.h"
#include "function_pointers.h"
#include <publib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(int arc, char **argv)
{
	int (*f)(int, int), a, b, res;

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (arc == 4)
	{
		a = atoi(argv[1]);
		f = atoi(argv[2]);
		b = atoi(argv[3]);
		if (b == 0 && (f == / || f == %))
		{
			printf("Error\n");
			exit(100);
		}
		res = f(a, b);
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
 
