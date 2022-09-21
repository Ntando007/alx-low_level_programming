#include "main.h"
/**
 * _isupper(int c) - checks for uppercase character.
 * @c - return value uppercase/lowercase.
 * @Return 1: if c is uppercase
 * @Return 0: otherwise
 * Return - Always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
