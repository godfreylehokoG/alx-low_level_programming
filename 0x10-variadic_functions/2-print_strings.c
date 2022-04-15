#include "variadic_functions.h"
#include "stdarg.h"

/**
 * print_strings - Sums all given parameters
 * @separator: separetes ints
 * @n: length of ints
 * Return: sum of given ints.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j = 1;
	va_list argv;

	va_start(argv, n);

	if (separator != NULL && n > 0)
		for (i = 0; n > i; i++)
		{
			if (n > j)
				printf("%s%s", va_arg(argv, char*), separator);
			else
				printf("%s", va_arg(argv, char*));
			j++;
		}
	printf("\n");
	va_end(argv);
}
