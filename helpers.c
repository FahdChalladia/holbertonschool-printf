#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_char - Prints a single character.
 * @c: The character to print.
 *
 * Return: The number of characters printed.
 */
int print_char(char c)
{
return (write(1, &c, 1));
}

/**
 * print_string - Prints a string.
 * @s: The string to print.
 *
 * Return: The number of characters printed.
 */
int print_string(char *s)
{
if (s == NULL)
s = "(null)";
return (write(1, s, strlen(s)));
}

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
