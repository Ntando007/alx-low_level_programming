#include "main.h"
/**
 * main - check and compile code
 * int _isalpha - check alphabetic character
 * Return: Always 0
 */
int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
