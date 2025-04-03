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
int print_unsigned(unsigned int n)
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

/**
 * print_octal - Prints an octal number.
 * @num: The unsigned integer to print as octal.
 *
 * Return: The number of characters printed.
 */
int print_octal(unsigned int num)
{
char buffer[20];
int len = sprintf(buffer, "%o", num);
return (write(1, buffer, len));
}

/**
 * print_hex - Prints a hexadecimal number.
 * @num: The unsigned integer to print as hexadecimal.
 * @format: The format specifier for lowercase or uppercase.
 *
 * Return: The number of characters printed.
 */
int print_hex(unsigned int num, char format)
{
char buffer[20];
if (format == 'x')
sprintf(buffer, "%x", num);
else
sprintf(buffer, "%X", num);
return (write(1, buffer, strlen(buffer)));
}

/**
 * print_pointer - Prints the address of a pointer.
 * @ptr: The pointer to print.
 *
 * Return: The number of characters printed.
 */
int print_pointer(void *ptr)
{
char buffer[20];
if (ptr == NULL)
return (write(1, "(nil)", 5));
sprintf(buffer, "%p", ptr);
return (write(1, buffer, strlen(buffer)));
}
