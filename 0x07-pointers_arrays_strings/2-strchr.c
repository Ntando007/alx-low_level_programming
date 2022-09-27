#include "main.h"
/**
 * _strchr - locates character in a string
 * @s: string
 * @c: occurrence of character
 *
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	int i;
	

	for (i = 0; s[i] >= '\0'; i++ //string(*s) index(i) & direct to null
	{
		if (s[i] == c) 
			return (s + i);
	}

	return ('\0'); // NULL
}
