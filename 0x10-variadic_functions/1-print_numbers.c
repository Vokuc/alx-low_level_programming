#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers followed by a new line
 * @seperator: pointer to the string
 * to be printed between the numbers
 * @n: number of integers passed to the function
 * Return: void
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	int i;
	va_list args;

	if (seperator == NULL)
		seperator = "";
	va_start(args, n);
	for (i = n; i >= 0; i = va_arg(args, int))
		if (i == -1)
			printf("%d", i);
		else
			printf("%d%p", i, seperator);
	va_end(args);
}
