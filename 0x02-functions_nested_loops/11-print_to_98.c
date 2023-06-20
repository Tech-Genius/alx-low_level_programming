#include "main.h"
#include "6-abs.c"
#include <stdio.h>
/**
 * print_to_98 - Prints all numbers from n to 98
 * @n: The starting number
 *
 * Description: This function prints all the numbers from the given starting
 * number (n) up to 98, inclusive, in ascending order.
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	} else
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
