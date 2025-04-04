#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_hex - Prints a hexadecimal number.
 * @num: The unsigned integer to print as hexadecimal.
 * @format: The format specifier for lowercase or uppercase.
 *
 * Return: The number of characters printed.
 */
int print_hex(unsigned num, char format)
{
char buffer[20];
if (format == 'x')
sprintf(buffer, "%x", num);
else
sprintf(buffer, "%X", num);
return (write(1, buffer, strlen(buffer)));
}
