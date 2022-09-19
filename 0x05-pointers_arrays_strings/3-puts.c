#include "main.h"
/**
 * _puts(char *str) - show string and puts to stdout
 * @str - string value
 * Return: Success
 */
void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		_putchar (str[c]);
	}
	_putchar('\n');
}
