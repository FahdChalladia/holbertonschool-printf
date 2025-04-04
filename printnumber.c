#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_number - Prints an integer.
 * @num: The integer to print.
 *
 * Return: The number of characters printed.
 */
int print_number(int num)
{
char buffer[20];
int len = sprintf(buffer, "%d", num);
return (write(1, buffer, len));
}
