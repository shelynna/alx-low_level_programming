#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 is success
 */
int main(void)
{
	char *sh = "Standard";

	while(*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
