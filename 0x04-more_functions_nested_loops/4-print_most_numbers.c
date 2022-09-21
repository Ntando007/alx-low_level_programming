#include "main.h"
/**
 * print_most_numbers - prints numbers
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int x;

	for (x = 18; x < 28; x++)
	{
		if (x != 20 && x != 22)
		{
		_putchar(x);
		}
	_putchar(10);
	}
}
