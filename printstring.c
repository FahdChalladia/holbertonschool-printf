#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
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
