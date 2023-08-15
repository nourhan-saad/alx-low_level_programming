#include <stdlib.h>
#include <time.h>
#include <sdtio.h>
/**
 * main - Entry point
 *
 * Description:
 *
 * Return: Always 0 (Succes)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	return (0);
}
