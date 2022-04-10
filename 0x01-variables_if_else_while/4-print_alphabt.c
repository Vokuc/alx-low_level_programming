#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always return 0
 */
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if ((a != 'q') && (a != 'e'))
		{
			putchar(a);
		}
	}

	putchar('\n');
	return (0);
}
