#include "main.h"
/**
*times_table - prints the 9 times of a table
*
*Return: returns nothing
*/
void times_table(void)
{
int digit, mul, output;
for (digit = 0; digit <= 9; digit++)
{
_putchar('0');

for (mul = 1; mul <= 9; mul++)
{
_putchar(',');
_putchar(' ');
output = digit * mul;
if (output <= 9)
_putchar(' ');
else
_putchar((output / 10) + '0');

_putchar((output % 10) + '0');
}
_putchar('\n');
}
