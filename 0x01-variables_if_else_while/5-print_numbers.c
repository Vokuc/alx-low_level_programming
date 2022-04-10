#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always return 0
 */
int main(void)
{
	int a;

	a = 0;

	while (a <= 10)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
