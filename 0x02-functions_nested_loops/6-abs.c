#include "main.h"
/**
 * _abs - function that computs the absolute
 *			value of an intager
 *
 * @n: tekes an integer type to function
 *
 *Return: 0 always sucsses
*/
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
