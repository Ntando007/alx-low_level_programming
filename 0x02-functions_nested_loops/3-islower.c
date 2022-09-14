#include "main.h"
/**
 * main - compile and check code
 * int islower - check lowercase character
 * Return: Always 0
 */


int _islower(int c)
{

	if (c > 'a' && c < 'z')
	{
	return (1);
	}
	else 
	{
	return (0);
	}
}
