#include "main.h"
/**
 * print_last_digit - print last digit for the number
 *
 * @n: takes number input
 *
 * Return: lastDigit
*/
int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		lastDigit = -1 * (n % 10);
	else
		lastDigit = n % 10;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
