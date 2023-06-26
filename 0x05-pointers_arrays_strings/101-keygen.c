#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 6

/**
 * generate_password - Generates a random valid password
 *
 * Return: void
 */
void generate_password(void)
{
char password[PASSWORD_LENGTH + 1];
int i;
srand(time(NULL));
for (i = 0; i < PASSWORD_LENGTH; i++)
{
/* Generate a random character in the range '!' to '~' */
password[i] = '!' + (rand() % ('~' - '!'));
}
password[PASSWORD_LENGTH] = '\0';
printf("Generated password: %s\n", password);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
generate_password();
printf("Tada! Congrats\n");
return (0);
}
