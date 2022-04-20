#include "main.h"
#include <stdio.h>

/**
 * _strlen - function that returns the length of a string
 * @s: pointer to string to be worked on
 * Return: int returns 0
 */

int _strlen(char *s)
{
	int u;

	u = 0;
	while (s[u] != '\0')
	{
		u++;
	}
	return (u);
}
