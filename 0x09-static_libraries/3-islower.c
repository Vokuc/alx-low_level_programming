#include "main.h"

/**
 * _islower - functions entry point
 *
 * @c: the  char to be checked
 *
 * Return: return 0 for int function
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
