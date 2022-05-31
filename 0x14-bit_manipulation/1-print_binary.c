#include "main.h"

/**
 * print_binary - converts a number to binary
 * @n: number to be converted
 */

void print_binary(unsigned long int n)
{
	int i;
	int count = 0;
	unsigned long int curr_num;

	for (i = 63; i >= 0; i--)
	{
		curr_num = n >> i;

		if (curr_num & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}
	}
	if (!count)
	{
		_putchar('0');
	}
}
