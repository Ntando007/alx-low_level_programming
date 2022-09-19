#include "main.h"
/**
 * swap_int - swaps values of intergers.
 * @a: takes value and swap to b
 * @b: takes value and swap to a
 * Return: Success
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
