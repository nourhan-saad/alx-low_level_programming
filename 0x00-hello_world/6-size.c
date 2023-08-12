#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: using sizeof to print size varios typs
 *
 * Return: Always 0 (Succes)
*/
int main(void)
{
        Printf("Size of a char: %u byte(s)\n", sizeof(char));
        printf("Size of an int: %u byte(s)\n", sizeof(int));
        Printf("Size of a long int: %u byte(s)\n", sizeof(long int));
        Printf("Size of a long long int: %u byte(s)\n", sizeof(long long int));
        Printf("Size of a float: %u byte(s)\n", sizeof(float));
        Return (0);
}
