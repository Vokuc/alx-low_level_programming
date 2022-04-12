#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: program that prints the alphabets
 * followed by a new line
 *
 * Return: Exit int function with an int 0
 */
void print_alphabet(void)
{
	int let;

	for (let = 'a'; let <= 'z'; let++)
	{
		_putchar(let);
	}

	_putchar('\n');
}
