#include <stdio.h>
/**
 * main - Compile code
 * Description: Prints the alphabet at reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
char let = 'z';
while (let >= 'a')
{
putchar(let);
let--;
}
putchar('\n');
return (0);
}
