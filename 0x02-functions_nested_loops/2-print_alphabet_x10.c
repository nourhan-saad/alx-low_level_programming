#include "main.h"
/**
 *print_alphabet_x10 - function that print alphabet 10 times
*/
void print_alphabet_x10(void)
{
	int ch;
	int sh;

	for (ch = 0; ch <= 9; ch++)
	{
		for (sh = 'a'; sh <= 'z'; sh++)
			_putchar(sh);
		_putchar('\n');
	}
}
