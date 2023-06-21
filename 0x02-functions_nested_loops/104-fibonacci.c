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
int count = 2;
printf("%d, %d", n1, n2);
while (count < 98)
{
int next = n1 + n2;
printf(", %d", next);
n1 = n2;
n2 = next;
count++;
}
printf("\n");
return (0);
}
