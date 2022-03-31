#include "main.h"

/**
 * factorial - function to factorize
 * @n: int to factorize
 * Return: factorial
 */

int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);
	if (n > 0)
		return (n * factorial(n - 1));
	return (-1);
}
