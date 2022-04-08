#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int n;
	int dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	dig = n % 10;
	if (dig > 5)
	{
		printf("Last digit of %d is %c and is greater than 5\n", n, dig);
	}
	else if (dig  == 0)
	{
		printf("Last digit of %d is %c and is 0\n", n, dig);
	}
	else if ((dig < 6) && (dig != 0))
	{
		printf("Last digit of %d is %c and is less than 6 and not 0\n", n, dig);
	}
	return (0);
}
