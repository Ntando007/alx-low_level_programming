#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 *@argc: counts
 *@argv: pointer to array
 *Return: Success
 */
 
int main(int argc, char *argv[])
{
  if (argc > 0)
    printf("%s\n", argv[0]);
  return (0);
}
