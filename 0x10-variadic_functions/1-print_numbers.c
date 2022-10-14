#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - prints all numbers with a separator
 * @separator: separe numbers
 * @n: int, number of undefined arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
var_list list;
unsigned int i;

var_start(list, n);

for (i = 0; i < n; i++)
{
	printf("%i", var_arg(list, int));
	if (i != n - 1 && separator != NULL)
		printf("%s", separator);
}
var_end(list);

putchar('\n');
}
