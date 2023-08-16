#include "main.h"
/**
 *print_alphabet_x10 - function that print alphabet 10 times
*/
void print_alphabet_x10(void)
{
	int ch;
	int sh;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		for (sh = 0; sh <= 9; sh++)
			_putchar(ch);
		_putchar('\n');
	}
}
