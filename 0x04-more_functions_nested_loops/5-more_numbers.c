#include "main.h"
/**
 * more_numbers - shows the numbers
 * Return: Always 0
 */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
<<<<<<< HEAD
				_putchar((a / 10) + 30;
=======
				_putchar((b / 10) + 48);
>>>>>>> 7b420e233b1803f879f89eb270be75c6c6f5a3e0
			}
			_putchar((b % 10) + 48);
		}
		_putchar(10);
	}
}
