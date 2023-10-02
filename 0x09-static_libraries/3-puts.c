#include <stdio.h>
#include "main.h"
/**
 * _puts - print the strig follwed by new line
 *
 * @str: its a parameter
 *
 * retur: is nothing
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str + 0);
		str++;
	}
	putchar('\n');
}
