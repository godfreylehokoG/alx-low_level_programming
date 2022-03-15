#include "main.h"

/**
 * _islower - check the code
 * @c:
 *
 * Return: 1 if char is lowercase 0 if not.
 */
int _islower(int c)
{

	if (c > 96 && c < 123)
	{
		return (1);
	}
	return (0);
}
