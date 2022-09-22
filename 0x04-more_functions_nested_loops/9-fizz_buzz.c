#include "main.h"
#include <stdio.h>
/**
 * main - compile code, print numbers from 1 to 100
 * multiples of three - show Fizz
 * multtiples of five - show Buzz
 * both numbers five and three - show FizzBuzz
 * Return: Always 0(Success)
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if(x % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (x % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (x % 3 == 0 && x % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else
		{
			printf(" %d", x);
		}
	printf("\n");

	}
}
