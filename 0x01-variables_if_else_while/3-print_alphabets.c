#include <stdio.h>
/**
 * main - Compile code 
 * Return : value always 0 for (Success)
 */
int main(void)

	char c;
	char x;
	
	for (c = 'a'; c <= 'z'; c++)
	{	
		putchar(c);

		for(x ='A'; x <= 'Z'; x++)
		{	
			putchar(x);
	putchar('\n');	
		}
	{
	return (0);
