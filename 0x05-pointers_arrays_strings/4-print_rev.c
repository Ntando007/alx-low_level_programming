#include "main.h"
/**
 * print_rev(char *s) - puts string in reverse
 * @s - value
 * Return: Success
 */
void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}

	for (i = i -1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
