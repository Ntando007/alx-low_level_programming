#include "main.h"
/**
 * puts_half - show half string
 * @str: value
 * Return: Success
 */
void puts_half(char *str)
{
	int i;
	int len;
	int n;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	n = (len - 1) / 2;
	for (i = n + 1; str[i] != '\0'; i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
