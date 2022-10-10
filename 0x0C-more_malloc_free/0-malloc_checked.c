#include "main.h"
/**
 *malloc_checked - allocate memory
 *@b: character
 *
 *Return: Success
 */
void *malloc_checked(unsigned int b);
{
  int* ptr;
  
  ptr = (int)malloc(n * sizeof(int));
  
  if (ptr == NULL)
  {
    exit(98);
    return (NULL);
  }
  return (ptr);
}
