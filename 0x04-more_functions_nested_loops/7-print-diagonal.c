#include "main.h"
/**
 * print_diagonal - prints diagonal line throught terminal
 * @n - display number of lines
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int i;
	int space;

	for (i = 0; i < n; i++)
	{
		for (space = 0; space < i; space++)
		{
			_putchar(" ");
		}
		_putchar('\\');
		_putchar('\n');
	)
	if (n <= 0)
	{
		_putchar('\n');
	}
}
