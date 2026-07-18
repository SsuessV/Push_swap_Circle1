*This project has been created as part of the 42 curriculum by bsurilla.*

# ft_printf

## Description

The goal of this project is to recreate a simplified version of the standard C `printf()` function.

`ft_printf` handles formatted output using variadic arguments and supports the following conversions:

* `%c` — character
* `%s` — string
* `%p` — pointer address
* `%d` — decimal integer
* `%i` — integer
* `%u` — unsigned integer
* `%x` — hexadecimal (lowercase)
* `%X` — hexadecimal (uppercase)
* `%%` — percent sign

This project focuses on understanding variadic functions, formatted output, recursion, type conversions, and low-level output using the `write()` system call.

## Instructions

### Compilation

Compile the library with:

```bash
make
```

This will generate:

```text
libftprintf.a
```

### Cleaning

Remove object files:

```bash
make clean
```

Remove object files and the library:

```bash
make fclean
```

Recompile everything:

```bash
make re
```

### Usage

Include the header file:

```c
#include "ft_printf.h"
```

Compile your program with the library:

```bash
cc main.c libftprintf.a -Wall -Werror -Wextra
```

Example:

```c
ft_printf("Hello %s! You are %d years old.\n", "Bea", 42);
```

## Resources

### References

* Linux Manual Pages: https://man7.org/linux/man-pages/man3/printf.3.html
* Linux Manual Pages: https://man7.org/linux/man-pages/man3/stdarg.3.html
* cppreference: https://en.cppreference.com/w/c/variadic
*  Geeks for Geeks: https://www.geeksforgeeks.org/c/how-to-write-your-own-printf-in-c/
* Laura & Simon's Gitbook: https://42-cursus.gitbook.io/guide/1-rank-01/ft_printf/variadic-functions#va_end-function-macro

### AI Usage

AI was used as a learning and debugging aid throughout the project. It was primarily used to:

* Better understand variadic functions (`va_list`, `va_start`, `va_arg`, `va_end`)
* Discuss recursive implementations for number and hexadecimal printing
* Review logic and identify edge cases
* Explain pointer formatting and type conversions
* Assist in writing project documentation

All code was written, tested, and integrated by bsurilla.
