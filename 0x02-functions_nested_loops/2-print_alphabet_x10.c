#include "main.h"
/**
 * main - compile and check code
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int letter;
	int counts;

	counts = 0;
	while (counts < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++){

			_putchar(letter);
		}
	}

	counts++;
	_putchar('\n');
}
