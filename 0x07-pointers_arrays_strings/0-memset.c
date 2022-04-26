#include "main.h"
#include <stdio.h>

/**
 * _memset - fills the first n bytes of the memory area
 * pointed to by s with the constant b
 * @s: pointer to memory area
 * @b: constant byte to fill the first n bytes
 * @n: integer showing how much space of s, b will take
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	/* declare for loop */
	for (i = 0; i < n; i++)
	{
		*(s + i) = b; /* add one position to s */
	}
	return (s);
}
