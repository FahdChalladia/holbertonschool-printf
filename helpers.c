#include "main.h"


/**
 * print_char - Prints a single character.
 * @c: The character to print.
 *
 * Return: 1 (character printed).
 */
int print_char(char c)
{
write(1, &c, 1);
return (1);
}

/**
 * print_string - Prints a string.
 * @str: The string to print.
 *
 * Return: The number of characters printed.
 */
int print_string(char *str)
{
int count = 0;
if (str == NULL)
{
write(1, "(null)", 6);
return (6);
}
while (str[count] != '\0')
{
write(1, &str[count], 1);
count++;
}
return (count);
}

/**
 * print_number - Prints an integer.
 * @n: The integer to print.
 *
 * Return: The number of characters printed.
 */
int print_number(int n)
{
int i, j, count = 0;
char buffer[12];
if (n == INT_MIN)
{
write(1, "-2147483648", 11);
return (11);
}

if (n == 0)
{
write(1, "0", 1);
return (1);
}
if (n < 0)
{
write(1, "-", 1);
count++;
n = -n;
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
