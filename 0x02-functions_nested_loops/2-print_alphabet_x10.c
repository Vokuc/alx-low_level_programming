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
	int a;
	int b;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
		for (b = 0; b <= 10; b++)
		{
			putchar(b);
		}
	}
	putchar('\n');
}
