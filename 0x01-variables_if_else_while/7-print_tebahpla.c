#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: return 0 always
 */
int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
