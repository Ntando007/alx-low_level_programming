#include "main.h"
/**
 * _memset - fill memory with a constant byte
 * @n: bytes of the memory area
 * @s: pointed too
 * @b: constant byte b
 *
 * Return: memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i; /*declare var*/

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b; /*access i and constat to b*/
	}

	return (s); /*pointer to memory area s*/
}
