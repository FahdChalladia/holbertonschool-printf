#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "main.h"


/**
 * print_unsigned - Prints an unsigned integer.
 * @num: The unsigned integer to print.
 *
 * Return: The number of characters printed.
 */
int print_unsigned(int n)
{
{
int j;
int count = 0;
char buffer[20];
int i = 0;
if (n == 0)
{
write(1, "0", 1);
return (1);
}
while (n > 0)
{
buffer[i] = (n % 10) + '0';
n /= 10;
i++;
}
for (j = i - 1; j >= 0; j--)
{
write(1, &buffer[j], 1);
count++;
}
return (count);
}
}
