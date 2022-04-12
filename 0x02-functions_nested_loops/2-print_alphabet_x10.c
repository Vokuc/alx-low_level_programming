#include "main.h"

/**
 * print_alphabet_x10 - Entry point of functions
 *
 * Description: prints letters of the alphabet x10
 *
 * Return: void function returns nothing
 */
void print_alphabet_x10(void)
{
	int count = 0;
	int letter;

	while (count <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		count++;
		_putchar('\n');
	}
}
