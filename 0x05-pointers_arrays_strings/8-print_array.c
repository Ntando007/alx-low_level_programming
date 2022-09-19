#include "main.h"
#include <stdio.h>
/**
 * print_array - display elements of array
 * @a: value
 * @n: length of elements of array
 * Return: Success
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
