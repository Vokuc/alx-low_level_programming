#include "main.h"
#include <stdio.h>

/**
 * swap_int - function entry to swap two numbers
 * @a: pointer to number that will be swapped
 * @b: pointer to second number that will be swapped
 */

void swap_int(int *a, int *b)
{
	int f;

	f = *a;
	*a = *b;
	*b = f;
}
