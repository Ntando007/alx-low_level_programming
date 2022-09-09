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

	printf("Size of a char: %zu bytes(s)\n",sizeof(Chartype));
	printf("Size of an int: %zu bytes(s)\n", sizeof(Intype));
	printf("Size of a long int: %zu bytes(s)\n", sizeof(Longtype));
	printf("Size of a long long int: %zu bytes(s)\n", sizeof(Longlongtype));
	printf("Size of a float: %zu bytes(s)\n", sizeof(Floattype));
	return (0);
}
