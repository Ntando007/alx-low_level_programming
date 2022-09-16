#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);

/**
 * print_number - show integer
 * @n: integer
 * Return: void
 */
void print_number(int n)
{
	unsigned int b = 0;

	if (n < 0)
	{
		b = -n;
		_putchar('-');
	}

	else
	{
		b = n;
	}

	if (b /10)
	{
		print_number(b / 10);
	}

	_putchar((b % 10) + '0');
}
