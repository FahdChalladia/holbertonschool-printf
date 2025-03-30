#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * _printf - Prints output based on the format string.
 * @format: Format string to handle.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
int count = 0;
va_list args;
va_start(args, format);
for (int i = 0; format && format[i] != '\0'; i++)
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
