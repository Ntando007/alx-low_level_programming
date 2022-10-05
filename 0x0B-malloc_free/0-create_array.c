#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates array of char
 * @size: size of memory
 * @c: character
 *
 * Return: NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int s;
	/*char c;*/

	if (size <= 0)
		return (0);

	s = malloc(sizeof(char) * size);

	if (s == 0)
		return (0);

	for (i = 0; i < size; i++)
		*(s +1) = c;

	*(s + i) = '\0';

	return (s);
}	
