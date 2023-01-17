#include "main.h"
/**
 * _isalpha - checks for alphabet char
 * @c: the char needs to be checked
 *
 * return: 1 if char lower or upper , 0 none
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
