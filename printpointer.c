#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_pointer - Prints the address of a pointer.
 * @ptr: The pointer to print.
 *
 * Return: The number of characters printed.
 */
int print_pointer(void *ptr)
{
char buffer[20];
if (ptr == NULL)
return (write(1, "(nil)", 5));
sprintf(buffer, "%p", ptr);
return (write(1, buffer, strlen(buffer)));
}
