#include "main.h"
/**
 * _memcpy - copies memory area
 * @n: bytes
 * @src: memory area
 * @dest: memory area
 *
 * Return: dest pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		src[i] = dest[i];
	}

	return (dest);
}
