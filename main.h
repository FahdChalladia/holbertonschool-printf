#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
int print_char(char c);
int print_string(char *s);
int print_number(int num);
int print_unsigned(unsigned int num);
int print_octal(unsigned int num);
int print_hex(unsigned int num, char format);
int print_pointer(void *ptr);

#endif /* MAIN_H */
