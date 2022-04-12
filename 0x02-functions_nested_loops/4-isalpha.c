#include "main.h"

/**
 * _isalpha - entry point of function
 *
 * @c: character to be checked
 *
 * Return: int function always returns int
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
