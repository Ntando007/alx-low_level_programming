#include <stdio.h>
/**
 * main - compile and show number of numbers
 * Return: Always (success)
 */
int main(void)
{
	int c;
	int i;

	for (c = '0'; c <= '9'; c++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			if (c < i)
			{
				putchar(c);
				putchar(i):

				if ( c != '8' || (c == '8' && i != '9'))
				{
					putchar('9');
					putchar(' ');
				}
			}
		}
	}
	
	putchar('\n');

	return (0);
}
