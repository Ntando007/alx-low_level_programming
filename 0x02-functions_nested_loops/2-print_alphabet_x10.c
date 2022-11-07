#include "main.h"
/**
 * main - compile and check code
 * int print_alphabet_x10(void) - show alphabets
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

	_putchar('\n');
}
