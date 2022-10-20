#include "main.h"
/**
 * print_sign - print the sign of the numbers
 * @n: number to be checked
 * return: 1 and prints + if n is greater than zero and more
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('_');
		return (-1);
}
