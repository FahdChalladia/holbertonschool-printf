#include "main.h"
#include <unistd.h>
#include <stdarg.h>

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
int j, count = 0;
char buffer[10];
int i = 0;

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

/**
 * _printf - Prints output based on the format string.
 * @format: Format string to handle.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
int i, count = 0;
va_list args;

va_start(args, format);
for (i = 0; format && format[i] != '\0'; i++)
{
if (format[i] == '%' && format[i + 1] != '\0')
{
i++;
if (format[i] == 'c')
count += print_char(va_arg(args, int));
else if (format[i] == 's')
count += print_string(va_arg(args, char *));
else if (format[i] == 'd' || format[i] == 'i')
count += print_number(va_arg(args, int));
else if (format[i] == '%')
{
write(1, "%", 1);
count++;
}
}
else
{
write(1, &format[i], 1);
count++;
}
}
va_end(args);
return (count);
}
