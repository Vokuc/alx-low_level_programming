#include "main.h"

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
			_putchar(i + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(i + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		_putchar(norm + '0');
	}
}
