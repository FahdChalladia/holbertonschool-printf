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
