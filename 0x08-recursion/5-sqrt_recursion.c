#include "main.h"

/**
 * getsqr - functions return x raised to the power of y.
 * @start: starting int.
 * @end: end int.
 * @n: int to get the square root of.
 * Return: result.
 */

int getsqr(int start, int end, int n)
{
	long i;

	if (end >= start)
	{
		i = start + (end - start) / 2;
		if (i * i == n)
			return (i);
		if (i * i > n)
			return (getsqr(start, i - 1, n));
		if (i * i < n)
			return (getsqr(i + 1, end, n));
	}
	return (-1);
}

/**
 *_sqrt_recursion - function for natural square root of an int
 *@n: number
 *Return: square root of n or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (getsqr(2, n, n));
}
