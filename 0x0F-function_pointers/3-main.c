#include "3-calc.h"
#include "function_pointers.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(int arc, char **argv)
{
	int (*f)(int, int), a, b, res;

	if (arc == 4)
	{
		a = atoi(argv[1]);
		f = get_op_func(argv[2]);
		b = atoi(argv[3]);
		res = f(a, b);
		printf("%d\n", res);
		if (f == NULL)
		{
			printf("Error\n");
			exit (99);
		}
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
 
