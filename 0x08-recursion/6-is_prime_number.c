#include "main.h"

/**
 * sqtRecursive - function for sqaure root.
 * @n1: int to get sqaure root of.
 * @n2: int.
 * Return: 1 if not sqaure root.
 */

int sqtRecursive(int n1, int n2)
{
	if (n1 <= 0)
		return (-1);
	if (n1 * n1 == n2)
		return (n1);
	return (sqtRecursive(n1 - 1, n2));
}

/**
 *_sqrt_recursion - function to get natural square root.
 * @n: int.
 * Return: -1 if not a sqaure root.
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	return (sqtRecursive(n / 2, n));
}

/**
 * is_prime_number - function to find sqaure root.
 * @n: int.
 * Return: 1 if prime and 0 if not.
 */

int is_prime_number(int n)
{
	if (n <= 1 || _sqrt_recursion(n) >= 1)
		return (0);
	if (_sqrt_recursion(n) == -1)
		return (1);
	return (_sqrt_recursion(n));
}
