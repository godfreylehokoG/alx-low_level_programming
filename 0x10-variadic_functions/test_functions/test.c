#include "variadic_functions.h"

void printargs(/*const char *sep,*/int arg1, ...)
{
	va_list ap;
	int i;

	va_start(ap, arg1);
/*	if (sep != NULL)*/
	for (i = arg1; i >= 0; i = va_arg(ap, int))
		printf("%d", i);
	va_end(ap);
	putchar('\n');
}
