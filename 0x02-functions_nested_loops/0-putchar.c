#include "main.h"
/**
 * main - Entry point
 *
 * Description: print _putchar using putchar prototyp
 *
 * Return: Always 0 (Succes)
*/
int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');
	return (0);
}