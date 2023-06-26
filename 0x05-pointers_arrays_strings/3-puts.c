#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes a character to stdout
 * @c: The character to be written
 *
 * Return: On success, returns the character written as an unsigned char
 *         cast to an int. On error, returns -1.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
 * _puts - Prints a string followed by a new line
 * @str: The string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
