#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_char(char c);
int print_string(char *s);
int print_number(int num);
int print_unsigned(int num);
int print_octal(int num);
int print_hex(int num, char format);
int print_pointer(void *ptr);
int handle_format(char specifier, va_list args);


#endif /* MAIN_H */
