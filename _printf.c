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
int count, i;
va_list args;
va_start(args, format);
count = 0;
for (i = 0; format[i] != '\0'; i++)
{
if (!format || (format[0] == '%' && format[1] == '\0'))
return (-1);
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
