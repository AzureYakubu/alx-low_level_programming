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
int count;
printf("%d, %d", n1, n2);
for (count = 3; count <= 50; count++)
{
next = n1 + n2;
printf(", %d", next);
n1 = n2;
n2 = next;
}
printf("\n");
return (0);
}
