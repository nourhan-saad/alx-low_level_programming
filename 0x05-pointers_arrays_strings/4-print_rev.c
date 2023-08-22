#include <stdio.h>
#include "main.h"
/**
 * print_rev - that function that prints a string, in reverse,
 *		followed by a new line
 *
 * @s: its a parameter
 *
 * retur: is nothing
*/
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
