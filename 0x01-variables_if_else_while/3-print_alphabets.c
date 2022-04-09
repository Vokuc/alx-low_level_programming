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
		int upper_i = toupper(i);

		putchar(i);

		putchar(upper_i);
	}
	putchar('\n');
	return (0);
}
