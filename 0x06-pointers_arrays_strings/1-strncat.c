#include "main.h"
<<<<<<< HEAD
=======

>>>>>>> 7b420e233b1803f879f89eb270be75c6c6f5a3e0
/**
 * _strncat - concatenate two strings
 * @dest: character //destination
 * @src: character //source
<<<<<<< HEAD
 * @n: interger value
 * Return: Success
 */
char _strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;

	for (b = 0; b < 1000; b++)
=======
 * @n: integer value
 * Return: *dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;
  
  a = 0;
  
  for (b = 0; i < 1000; b++)
>>>>>>> 7b420e233b1803f879f89eb270be75c6c6f5a3e0
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
