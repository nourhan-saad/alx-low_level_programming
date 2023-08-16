#include "main.h"
/**
 * _islower case -function is to checke if the
 *		character is lowercase
 *
 * @c: checks input of the function
 *
 *Return: is 1 if the 'c' is lower case
 *	otherwise always 0 is sucsses
*/
int _islower(int c);{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
