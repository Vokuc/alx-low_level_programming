#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - entry point to 98 rendevous
 * @n: number to start from
 */
void print_to_98(int n)
{
	int norm = 98;
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
			{
				printf("%d", i);
			}
			else
			{
				printf("%d, ", i);
			}
		}
		printf("\n");
	}
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			{
				printf("%d", i);
			}
			else
			{
				printf("%d, ", i);
			}
		}
		printf("\n");
	}
	else
	{
		printf("%d\n", norm);
	}
}
