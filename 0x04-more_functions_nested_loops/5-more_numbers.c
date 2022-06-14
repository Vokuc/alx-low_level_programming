#include "main.h"

/**
 * more_numbers - print 0 to 14 ten times
 */

void more_numbers(void)
{
int i;
int first_num;
int second_num;
int result;

i = 0;
result = 0;
while (i < 10)
{
while (result <= 14)
{
if (result < 10)
{
second_num = result;
}

else
{
first_num = result / 10;
second_num = result % 10;
_putchar (first_num + '0');
}

_putchar (second_num + '0');

result++;
}
i++;
result = 0;
_putchar ('\n');
}

}
