#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/** 
 * print_last_digit - show last number
 * Return: Always 0
 */
int print_last_digit(int n)
{
int x;
if (n < 0)
{
x = -1 * (n % 10);
_putchar(x + '0');
return (x);
}
else
{
x = n % 10;
_putchar(x + '0');
return (x);
}
}
