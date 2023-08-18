#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print the number from 0 to 9
 *
 *return: 0 always sucsses
 *
 */
void print_most_numbers(void)
{
        int num;

        for (num == 0; num <= 9; num++)
        {
                if (num == 2 || num == 4)
                        continue;
                _putchar(num + 48);
        }
        _putchar('\n');
}
