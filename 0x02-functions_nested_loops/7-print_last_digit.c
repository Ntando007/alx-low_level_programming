#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/** 
 * end_number - show last number
 * Return: Always 0
 */
int end_number(int n)
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
