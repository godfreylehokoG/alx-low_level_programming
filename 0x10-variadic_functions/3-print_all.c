#include "variadic_functions.h"

/**
 * print_all - Sums all given parameters
 * @format: separetes ints
 * Return: sum of given ints.
 */

void print_all(const char * const format, ...)
{
	va_list argv;
	int i = 0;
	char *str;

	va_start(argv, format);
	while (format != NULL && format[i] != 0)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(argv, int));
				break;
			case 'i':
				printf("%d", va_arg(argv, int));
				break;
			case 'f':
				printf("%f", va_arg(argv, double));
				break;
			case 's':
				str = va_arg(argv, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1] == 0)
			break;
		printf(", ");
		i++;
	}
	printf("\n");
	va_end(argv);
}
