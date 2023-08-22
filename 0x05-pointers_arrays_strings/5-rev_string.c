#include <stdio.h>
#include "main.h"
/**
 * rev_string - that  function that reverses a string.
 *
 * @s: its a parameter
 *
 * retur: is nothing
*/
void rev_string(char *s)
{
	int l, i;
	char tamp;

	for (l = 0; s[l] != '\0'; ++l)

	for (i = 0; i < l / 2; i++)
	{
		tamp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = tamp;
	}
}
