#include <stdio.h>
/**
 * main - entry point
 *
 * Descraption: print all alphabet letters
 *
 * Return: 0 always sucsses
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
