#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_octal - Prints an octal number.
 * @num: The unsigned integer to print as octal.
 *
 * Return: The number of characters printed.
 */
int print_octal(int num)
{
char buffer[20];
int len = sprintf(buffer, "%o", num);
return (write(1, buffer, len));
}
