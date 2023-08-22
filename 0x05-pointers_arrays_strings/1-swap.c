#include <stdio.h>
#include "main.h"
/**
 * swap_int - is use to swap the two parameters from
 *              its number to anther value
 *
 * @a: first input
 * @b: secound input
 *
 * retur: is nothing
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
