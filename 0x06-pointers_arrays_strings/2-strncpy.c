#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: destination character
 * @src: source character
 * @n: int
 * Return: @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, strcpy = 0;

	while (src[i++])
		strcpy++;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
	dest[i] = src[i];
	}

	for (i = strcpy; i < n; i++)
	{
	dest[i] = '\0';
	}
	return (dest);
}
