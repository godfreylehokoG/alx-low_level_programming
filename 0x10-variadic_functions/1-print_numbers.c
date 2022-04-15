#include "variadic_functions.h"
#include "stdarg.h"

/**
 * print_numbers - Sums all given parameters
 * @separator: separetes ints
 * @n: length of ints
 * Return: sum of given ints.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j = 1;
	int num;
	va_list argv;

	va_start(argv, n);

	for (i = 0; n > i; i++)
	{
		num = va_arg(argv, int);
		if (separator != NULL)
		{
			if (n > j )
				printf("%d%s", num, separator);
			else
				printf("%d", num);
		}
		j++;
	}
	printf("\n");
	va_end(argv);
}
