#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always return 0
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		printf("%d", a);
		a++;
	}
	putchar('\n');
	return (0);
}
