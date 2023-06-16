#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Prints the alphabet in lowercase, followed by uppercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;
/* Print lowercase alphabet */
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
/* Print uppercase alphabet */
for (letter = 'A'; letter <= 'Z'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
