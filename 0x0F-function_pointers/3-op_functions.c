#include "function_pointers.h"
#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: first number
 * @b: second number
 * Return: returns the results.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts a from b
 * @a: first number
 * @b: second number
 * Return: returns the results.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first number
 * @b: second number
 * Return: returns the results.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divids a against b
 * @a: first number
 * @b: second number
 * Return: returns the results.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo a against b
 * @a: first number
 * @b: second number
 * Return: returns the results.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
