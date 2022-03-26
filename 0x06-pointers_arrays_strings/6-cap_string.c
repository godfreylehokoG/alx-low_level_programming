#include "main.h"

/**
 * cap_string - copies a string
 * @a: str to convert toupper
 * Return: a
 */

char *cap_string(char *a)
{
	char b[] = "\t\n,;.!?\"(){}";
	int i;
	int j;

	i = 0;
	j = 0;
	while (a[i] != '\0')
	{
		if (a[i] > 96 && a[i] < 123)
		{
			if (i == 0)
				a[i] -= 32;

			else
			{
				while (b[j] != '\0')
				{
					if (a[i - 1] == b[j])
						a[i] -= 32;
					j++;
				}
			}
		}
		i++;
	}
	return (a);
}
