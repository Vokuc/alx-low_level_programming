#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of function
 * @argc: number of arguments in the cmd line
 * @argv: array holding the value of the args passed by argc
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%i\n", argc - 1);

	return (0);
}
