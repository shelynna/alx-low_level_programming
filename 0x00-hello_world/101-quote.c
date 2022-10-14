Vi 101-quote.c
#include <stdio.h>
#include <unistd.h>
/**
 *main- this is the program start
 *
 *Return: the value one returns on success.
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
