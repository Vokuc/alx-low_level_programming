#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: in has to return (0)
 */
int main(void)
{
	int a;

	for (a = 0; a < 26; ++a)
	{
		putchar('a' + a + '\n');
	}

	return (0);
}
