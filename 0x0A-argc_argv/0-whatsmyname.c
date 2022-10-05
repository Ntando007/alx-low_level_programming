#include <stdio.h>
#include <stdlib.h>

/**
<<<<<<< HEAD
 * main - entry point
 *
 * @argc: counts
 * @argv: pointer to array
 * Return: Success
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
=======
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
>>>>>>> 6e87a312e64db8ea5c707853b088e8df8fb2e624
}
