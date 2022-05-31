#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned log int n, unsigned long int m)
{
	int i;
	int count = 0;
	unsigned long int curr_num, exclude = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclude >> i;
		if (current & 1)
		{
			count++;
		}
	}
	return (count);
}
