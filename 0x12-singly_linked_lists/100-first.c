#include "lists.h"

void mystartupfun(void) __attribute__ ((constructor));

/**
 * mystartupfun - prints before the main
 * Return: void function
 */



void mystartupfun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
