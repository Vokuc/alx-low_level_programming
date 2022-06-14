#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0.
 */

int main(void)

{
long h, i;

h = 612852475143;
for (i = 2; i < h; i++)
{
while (h % i == 0)
h = h / i;
}

printf("%lu\n", h);

return (0);
}
