#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{ int intType;
float floatType;
double doubleType;
char charType;
long int longintType;
long long int longlongType
 

	printf("Size of char: %zu bytes(s)\n", sizeof(charType));
	printf("Size of int: %zu bytes(s)\n", sizeof(intType));
	printf("Size of long int: %zu bytes(s)\n", sizeof(longintType));
	printf("Size of long long int: %zu byte(s)\n", sizeof(longlongType));
	printf("Size of a float: %zu bytes(s)\n", sizof(floatType));
	return 0;

}
