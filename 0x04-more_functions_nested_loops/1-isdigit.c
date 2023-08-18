#include "main.h"

/**
 *_isdigit - check the code
 *
 * @c: input
 *
 * Return: Always 0 is digit 1 otherwis
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
