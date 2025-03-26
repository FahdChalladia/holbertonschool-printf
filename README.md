# printf Project

## Description
This project is a custom implementation of the C standard library function `printf`. It mimics the behavior of the original function, handling format specifiers and printing formatted output to the standard output.

## Requirements
### General
- Allowed editors: `vi`, `vim`, `emacs`
- Compiled on Ubuntu 20.04 LTS using:
  ```sh
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
  ```
- All files should end with a new line
- A `README.md` file is mandatory
- Code must follow the Betty coding style (`betty-style.pl`, `betty-doc.pl`)
- No global variables allowed
- Maximum of 5 functions per file
- Do not push `main.c` files to the repository
- Function prototypes must be in `main.h`
- All header files must be include-guarded

### Authorized Functions and Macros
- `write` (man 2 write)
- `malloc` (man 3 malloc)
- `free` (man 3 free)
- `va_start`, `va_end`, `va_copy`, `va_arg` (man 3 stdarg)

## Features
- Handles format specifiers: `%c`, `%s`, `%d`, `%i`, `%u`, `%o`, `%x`, `%X`, `%p`.
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

### Expected Output
```
Hello, world!
Character: A
Number: 42
```

## Files
| File         | Description |
|-------------|------------|
| `_printf.c` | Contains the main function implementation. |
| `format_specifiers.c` | Handles different format specifiers. |
| `helpers.c` | Utility functions for printing and formatting. |
| `main.h` | Header file with function prototypes. |

## Man Page
A `man_3_printf` file is included to document the function usage and behavior.

## GitHub Repository
Project repository: `holbertonschool-printf`

## Authors
- Fahd Challadia
- Mohamed raddaoui
