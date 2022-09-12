#include <stdio.h>
/**
 * main - Prints the alphabet c
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	/*putchar(tolower(c)*/
	return (0);
}
