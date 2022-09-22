#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: character //destination
 * @src: character //source
 * @n: interger value
 * Return: Success
 */
char _strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;

	for (b = 0; b < 1000; b++)
	{
		if (dest[b] == '\0')
		{
			break;
		}
		i++;
	}

	for (a = 0; src[b] != '\0' && b < n; b++)
	{
		dest[a + b] = src[b];
	}
	dest[a + b] = '\0';
	return (dest);
}
