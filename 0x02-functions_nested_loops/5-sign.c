#include "main.h"
/**
 * print_sign -print + if n is greater than zero
 *			0 if n is zero - if n is
 *			less than zero
 *
 * @n: is integer type is function
 *
 * Return: 1 if +, 0 if -
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
}
