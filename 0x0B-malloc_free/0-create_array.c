#include "main.h"
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
	int i;
<<<<<<< HEAD
=======
	/*char c;*/
>>>>>>> 3b9b29908a6b0fb09e78c44596c7ea229265fa9e

	if (size <= 0)
		return (0);

	s = malloc(sizeof(char) * s);

	if (s == 0)
		return (0);

	for (i = 0; i < size; i++)
		*(s + 1) = c;

	(s + i) = '\0';

	return (s);
}
