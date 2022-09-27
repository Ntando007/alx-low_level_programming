#include "main.h"

/**
 * _strncpy - copy a string
<<<<<<< HEAD
 * @dest: destination character
 * @src: source character
 * @n: int
 * Return: @dest
=======
 * @dest: destination character 
 * @src: source character 
 * @n: int
 * Return: *dest
>>>>>>> 7b420e233b1803f879f89eb270be75c6c6f5a3e0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, strcpy = 0;
<<<<<<< HEAD

=======
	
>>>>>>> 7b420e233b1803f879f89eb270be75c6c6f5a3e0
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
