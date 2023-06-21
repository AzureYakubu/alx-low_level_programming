#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
int n1 = 1;
int n2 = 2;
int next;
long sum = 2;
while (n2 <= 4000000)
{
next = n1 + n2;
if (next % 2 == 0)
{
sum += next;
}
n1 = n2;
n2 = next;
}
printf("%ld\n", sum);
return (0);
}
