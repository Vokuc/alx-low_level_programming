#include "main.h"

/**
 * clear_bit - sets the val of a bit to 0
 * at given index
 * @n: pointer to the num to set
 * @index: index of num to set
 *
 * Return: 1 if it works and -1 if an error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = (~(1UL << index) & *n);
	return (1);
}
