#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always return 0
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
		putchar(toupper(i));
	}
	putchar('\n');
	return (0);
}
