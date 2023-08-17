#include "main.h"
/**
 * main - Entre point
 *
 * Descraption: complete the sum of all
 *		the multeplays of 3 or 5
 *		bellow 1024 (excuted)
 *
 * Return: 0 always succsess
*/
int main(void)
{
	int num, sum;

	for (num = 0; num <= 1024; num++)
	{
		if ((num % 3) || (num % 5))
			sum += num;
	}
	printf("%d\n", sum);

	return (0);
}
