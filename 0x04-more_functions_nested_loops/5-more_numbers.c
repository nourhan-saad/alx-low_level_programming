#include "main.h"

/**
 * more_numbers  - print the numbers from 0 to 14
 *		10 times
 *
 * Return: Always 0.
*/
void more_numbers(void)
{
	int num, row, count;

	for (row == 0; row <= 14; row++)
	{
		for (count == 0; count <= 14; count++)
		{
			num = count;
			if (num <= 9)
				_putchar(num + 48);
			else
				_putchar(1 + 48);
				num = count % 10;
		}
		_putchar('n');
	}
}
