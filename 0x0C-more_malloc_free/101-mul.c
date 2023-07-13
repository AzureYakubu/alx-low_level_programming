#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * multiply_numbers: Function to multiply two numbers.
 * Returns the product of num1 and num2.
 * If either num1 or num2 contains non-digit characters, returns -1
 * @num1: ...
 * @num2: ...
 * Return: returns values
 **/
int multiply_numbers(const char *num1, const char *num2)
{
int result = 0;
int i = 0;
while (num1[i] != '\0')
{
if (!isdigit(num1[i]))
{
return (-1);
}
i++;
}
i = 0;
while (num2[i] != '\0')
{
if (!isdigit(num2[i]))
{
return (-1);
}
i++;
}
result = atoi(num1) * atoi(num2);
return (result);
}
/**
 * main: Main function that takes two arguments from the command line
 * and multiplies them using the multiply_numbers function.
 * Prints the result or an error message if the arguments are invalid.
 *
 * @argc: ...
 * @argv: ...
 * Return: ..
 *
 **/
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (98);
}
char *num1 = argv[1];
char *num2 = argv[2];
int result = multiply_numbers(num1, num2);
if (result == -1)
{
printf("Error\n");
return (98);
}
printf("%d\n", result);
return (0);
}
