#include "main.h"
/**
 * rev_string(char *s) - reverse a string
 * @s - string value
 * Return: Success
 */
void rev_string(char *s)
{
	int i;
	int x;

	char st;

	for (x = 0; s[x] != '\0'; ++x)
		;	
	for (i = 0; i < x / 2; ++x)
	{
		st = s[i];
		s[i] = s[x - 1 - i];
		s[x - 1 -i] = st;
	}
}