#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: character //destination
 * @src: character //source
 * @n: integer value
 * Return: *dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;
  
  a = 0;
  
  for (b = 0; i < 1000; b++)
	{
		if (dest[b] == '\0')
		{
			break;
		}
		a++;
	}

	for (a = 0; src[b] != '\0' && b < n; b++)
	{
		dest[a + b] = src[b];
	}
	dest[a + b] = '\0';
	return (dest);
}
