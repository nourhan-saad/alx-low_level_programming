#include "main.h"
/**
 * main - Entry point
 *
 * print_alphabet - utlizes on the _putchar function to print
 *
 * Return: Always 0 (Succes)
*/
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar("\n");
}
