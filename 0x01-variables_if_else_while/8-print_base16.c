#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: return 0 for int function
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
		putchar('0' + a);

	for (a = 'a'; a <= 'f'; a++)
		putchar(a);

	putchar('\n');

	return (0);
}
