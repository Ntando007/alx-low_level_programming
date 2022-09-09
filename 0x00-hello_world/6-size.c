#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int Intype;
	long int Longtype;
	long long int Longlongtype;
	char Chartype;
	float Floattype;

	printf("Size of a char: %zu bytes(s\n",sizeof(Chartype));
	printf("Size of int: %zu bytes(s)\n", sizeof(Intype));
	printf("Size of long int: %zu bytes(s)\n", sizeof(Longtype));
	printf("Size of long long int: %zu bytes(s)\n", sizeof(Longlongtype));
	printf("Size of float: %zu bytes(s)\n", sizeof(FloatType));
	return (0);
}
