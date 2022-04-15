#include "variadic_functions.h"
#include "stdarg.h"

/**
 * sum_them_all - Sums all given parameters
 * @n: length of ints
 * Return: sum of given ints.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list argv;
	va_start(argv, n);

	i = 0, sum = 0;
	for (i = 0; n > i; i++)
		sum += va_arg(argv, int);

	va_end(argv);
	return (sum);
}
