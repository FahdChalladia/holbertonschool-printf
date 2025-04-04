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
write(1, "\0", 1);
count += 2;
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
