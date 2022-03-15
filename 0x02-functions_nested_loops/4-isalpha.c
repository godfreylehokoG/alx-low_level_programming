#include "main.h"

/**
 * _isalpha - check the code
 * @c:
 *
 * Return: 1 if char is alphabet 0 if not.
 */
int _isalpha(int c)
{

	if (c > 64 && c < 123)
	{
		return (1);
	}
	return (0);
}
