#include "main.h"

/**
 * _pow_recursion - functions return x raised to the power of y.
 * @x: base.
 * @y: power
 * Return: result.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 1)
		return (x);
	if (y != 0)
		return (x * _pow_recursion(x, y - 1));
	return (1);

}
