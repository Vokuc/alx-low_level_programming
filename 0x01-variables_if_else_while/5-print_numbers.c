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
		printf("%d", a);
		a++;
	}
	printf('\n');
	return (0);
}
