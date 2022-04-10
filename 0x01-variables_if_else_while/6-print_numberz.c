#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always return 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar('0' + a);
	}

	putchar('\n');

	return (0);
}
