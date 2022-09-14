#include "main.h"

/**
 * main - Check and compile code
 * void print_alphabet(void) - show alphabet lowercase
 * Return: Value Always 0 (Success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}

	_putchar('\n');
}
