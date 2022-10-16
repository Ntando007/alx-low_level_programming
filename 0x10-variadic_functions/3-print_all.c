#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - function that prints character
 * @argptr: argument list pointer to character to be printed
 */

void print_char(va_list list)
{
	char c;

	c = va_arg(list, int);
	printf("%c", c);
}

/**
 * print_int - function that prints integer
 * @argptr: argument list pointer to integer to be printed
 */

void print_int(va_list list)
{
	int num_i;

	num_i = va_arg(list, int);
	printf("%i", num_i);
}

/**
 * print_float - function that prints a float
 * @argptr: argument list pointer to float to be printed
 */

void print_float(va_list list)
{
	float num;

	num = va_arg(list, double);
	printf("%f", num);
}

/**
 * print_string - function that prints string
 * @argptr: argument list pointer to string to be printed
 */

void print_string(va_list list)
{
	char *str;

	str = va_arg(list, char*);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 * @...: number of arguments
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list arguments;
	int index, arg_len;
	char *separator = "";

	prints_t fmt_list[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	va_start(arguments, format);
	index = 0;
	while (format && (*(format + index)))
	{
		arg_len = 0;
		while (arg_len < 4 && (*(format + index) != *(fmt_list[arg_len].notation)))
		{
			arg_len++;
		}
		if (arg_len < 4)
		{
			printf("%s", separator);
			fmt_list[arg_len].print_dType(arguments);
			separator = ", ";
		}
		index++;
	}
	printf("\n");
	va_end(arguments);
}
