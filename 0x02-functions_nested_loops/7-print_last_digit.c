#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - compile code and check 
 *
 * Return:Always 0
 */
int print_last_digit(int n)
{
	int end_number;

	if (n < 0)
	{
		end_number = (-1 *(n % 10));
		_putchar (end_number + '0');
		return (end_number);
	}

	else
	{
		end_number = (n % 10);
		_putchar (end_number + '0');
		return (end_number);
	}
}
