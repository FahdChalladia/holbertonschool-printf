#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - Prints output based on the format string.
 * @format: Format string to handle.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
int count = 0, i;
va_list args;
if (format == NULL )
write(1, "", 0);


va_start(args, format);
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%' && format[i + 1] == '\0')
{
write(1, "%", 1);
count++;
va_end(args);
return (count);
}
else if (format[i] == '%' && format[i + 1] != '\0')
{
i++;
count += handle_format(format[i], args);
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

/**
 * handle_format - Handles the format specifier.
 * @specifier: The format specifier.
 * @args: The variable arguments list.
 *
 * Return: The number of characters printed.
 */
int handle_format(char specifier, va_list args)
{
int count = 0;

if (specifier == 'c')
count += print_char(va_arg(args, int));
else if (specifier == 's')
count += print_string(va_arg(args, char *));
else if (specifier == 'd' || specifier == 'i')
count += print_number(va_arg(args, int));
else if (specifier == 'u')
count += print_unsigned(va_arg(args, unsigned int));
else if (specifier == 'o')
count += print_octal(va_arg(args, unsigned int));
else if (specifier == 'x' || specifier == 'X')
count += print_hex(va_arg(args, unsigned int), specifier);
else if (specifier == 'p')
count += print_pointer(va_arg(args, void *));
else if (specifier == '%')
{
write(1, "%", 1);
count++;
}
else
{
write(1, "%", 1);
write(1, &specifier, 1);
count += 2;
}
return (count);
}
