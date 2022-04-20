#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - entry point to function that updates
 * the value of an integer
 *
 * @n: pointer to integer
 */

void reset_to_98(int *n)
{
	int a = 10;

	*n = &a;
	*n = 98;
}
