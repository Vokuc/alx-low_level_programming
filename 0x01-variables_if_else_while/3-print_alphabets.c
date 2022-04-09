#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always return 0
 */
int main(void)
{
	int i;

	int a;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	for (a = 'A'; a <= 'Z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
