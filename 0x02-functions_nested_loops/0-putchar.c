#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char message[] = "_putchar\n";
int i = 0;
while (message[i] != '\0')
{
write(1, &message[i], 1);
i++;
}
return (0);
}
