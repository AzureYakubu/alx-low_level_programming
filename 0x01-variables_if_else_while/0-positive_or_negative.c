#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * printNumberInfo - Prints information about a given number
 * @n: The number to be analyzed
 *
 * Prints whether the number is positive, negative, or zero.
 */

void printNumberInfo(int n)
{
printf("The number %d ", n);
if (n > 0)
{
printf("is positive");
}
else if (n == 0)
{
printf("is zero");
}
else
{
printf("is negative");
}
printf("\n");
}

/**
 * main - Entry point of the program
 *
 * Generates a random number and prints its information.
 * Also prints information about predefined numbers.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printNumberInfo(n);
n = 98;
printNumberInfo(n);
n = -98;
printNumberInfo(n);
n = 0;
printNumberInfo(n);
return (0);
}
