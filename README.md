# printf Project 

March 2025

## Description
This project is a custom implementation of the C standard library function `printf`. It mimics the behavior of the original function, handling format specifiers and printing formatted output to the standard output.

## Requirements
### General
- Compiled on Ubuntu 20.04 LTS using:
  ```sh
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
  ```
- The code follow the Betty coding style (`betty-style.pl`, `betty-doc.pl`).
- No global variables used.

### Authorized Functions and Macros
- `write` (man 2 write)
- `malloc` (man 3 malloc)
- `free` (man 3 free)
- `va_start`, `va_end`, `va_copy`, `va_arg` (man 3 stdarg)

## Features and requirements
- Only handles those format specifiers: `%c`, `%s`, `%d`, `%i`, `%u`, `%o`, `%x`, `%p`.
- Supports flag characters like `+`, ` `, and `#`.
- Manages field width and precision.
- Works with modifiers like `l` and `h`.

## Usage
### Compilation
```sh
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c -o printf
```

### Example Usage
```c
#include "main.h"

int main(void)
{
    _printf("Hello, %s!\n", "world");
    _printf("Character: %c\n", 'A');
    _printf("Number: %d\n", 42);
    return 0;
}
```


## Files
| File         | Description |
|-------------|------------|
| `_printf.c` | Contains the main function implementation. |
| `handleformat.c` | Handles different format specifiers. |
| `main.h` | Header file with function prototypes for _printf and helper functions. |
| `printchar.c` | Contains utility function print_char for printing characters.|
| `printstring.c` | Contains utility function print_string for printing strings. |
| `printnumber.c` | Contains utility function print_number for printing integers. |
| `printunsigned.c` | 	Contains utility function print_unsigned_int for printing unsigned integers. |
| `printhex.c` | Contains utility function print_hex for printing hexadecimal numbers. |
| `printpointer.c` | 	Contains utility function print_pointer for printing pointer addresses. |
| `printoctal.c` | Contains utility function print_octal for printing octal numbers. |


## Man Page
A `man_3_printf` file is included to document the function usage and behavior.

## GitHub Repository
Project repository: `holbertonschool-printf`

## Authors
- Fahd Challadia <[fahdchalladia](https://github.com/fahdchalladia)>

## License :lock:

This project is licensed under the MIT License - see the [LICENSE](./LICENSE) file for details.

## ---



This program was written as part of the curriculum for Holberton School.
Holberton School is a campus-based full-stack software engineering program
that prepares students for careers in the tech industry using project-based
peer learning. For more information, visit [this link](https://www.holbertonschool.com/).
