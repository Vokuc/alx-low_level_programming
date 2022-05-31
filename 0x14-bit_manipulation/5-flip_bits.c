#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int count = 0;
	unsigned long int curr_num, exclude = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curr_num = exclude >> i;
		if (curr_num & 1)
		{
			count++;
		}
	}
	return (count);
}
