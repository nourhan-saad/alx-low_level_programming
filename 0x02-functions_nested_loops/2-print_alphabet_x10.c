#include "main.h"
/**
 *print_alphabet_x10 is needed to print the alphabet ten times
 *in lower cass so we need to make two loops inside each other
 *and no return due to exsestace of void .
*/
void print_alphabet_x10(void)
{
	int ch;
	int sh;

	for(ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
		for(sh = 0; sh <= 9; sh++)
			_putchar(sh);
}
