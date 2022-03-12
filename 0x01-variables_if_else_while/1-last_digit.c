#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* A program that Prints Last Digit */
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int n;
	int lsd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lsd = n % 10;

	if (lsd > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, lsd);
	}
		else if (lsd  == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, lsd);
	}
		else if (lsd < 6 && lsd != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lsd);
	}
	return (0);
}
