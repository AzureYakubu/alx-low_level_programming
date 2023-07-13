#include <stdio.h>
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int carry = 0;
int sum = 0;
int len_n1 = 0;
int len_n2 = 0;
int max_len = 0;
int i = 0;
int j = 0;
/* Calculate the lengths of n1 and n2 */
while (n1[len_n1] != '\0')
len_n1++;
while (n2[len_n2] != '\0')
len_n2++;
/* Determine the maximum length between n1 and n2 */
max_len = (len_n1 > len_n2) ? len_n1 : len_n2;
/* Ensure the result buffer has enough space to store the sum and null terminator */
if (max_len + 1 > size_r)
return (0);
/* Perform addition digit by digit */
for (i = len_n1 - 1, j = len_n2 - 1; i >= 0 || j >= 0 || carry; i--, j--)
{
int digit1 = (i >= 0) ? n1[i] - '0' : 0;
int digit2 = (j >= 0) ? n2[j] - '0' : 0;
sum = digit1 + digit2 + carry;
carry = sum / 10;
sum = sum % 10;
r[max_len] = sum + '0';
max_len--;
}
/* Null terminate the result string */
r[len_n1 > len_n2 ? len_n1 : len_n2] = '\0';
return (r);
}
int main(void)
{
char n1[] = "123456789";
char n2[] = "987654321";
char result[20];
char *sum = infinite_add(n1, n2, result, sizeof(result));
if (sum != 0)
printf("Sum: %s\n", sum);
else
printf("Result buffer is too small to store the sum.\n");
return (0);
}
