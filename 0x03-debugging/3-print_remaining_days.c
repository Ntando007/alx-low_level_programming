#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - input date and show how many
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
       	if (year % 4 == 0 || ((year % 400 == 0) && !(year % 100 == 0)))
	{
		if (month > 2 && bday >= 60)
		{
			day++
		}

		printf("Dyas of the year: %d\n", day;
		printf("Remaining days: %d\n", 365 - day);
	}
	else
	{
	if (month == 2 && day == 60)
	{
	printf"Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
	}
	else
	{
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 365 - day);
	}
	}
}