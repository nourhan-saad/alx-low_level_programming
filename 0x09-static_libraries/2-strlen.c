#include <stdio.h>
#include "main.h"
/**
 * _strlen - to get the length of this string
 *
 * @s: its a strang
 *
 * Return: will return length of string
*/
int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		counter++;
	return (counter);
}
