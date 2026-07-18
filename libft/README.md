*This project has been created as part of the 42 curriculum by bsurilla.*

# Libft

## Description

Libft is the first core project of the 42 curriculum.
The objective of the project is to recreate a collection of standard C library functions, as well as additional utility functions that will be reused throughout future projects at 42.

The project focuses on building a strong understanding of:

* memory management
* pointers
* strings and arrays
* dynamic allocation
* linked lists
* function pointers
* low-level programming concepts in C

The library was written entirely in C and follows the 42 Norminette coding standard.

---

# Library Overview

The library contains reimplementations of standard libc functions as well as additional helper functions and linked list utilities.

## Character checks & conversions

* ft_isalpha
* ft_isdigit
* ft_isalnum
* ft_isascii
* ft_isprint
* ft_toupper
* ft_tolower

## String functions

* ft_strlen
* ft_strdup
* ft_strchr
* ft_strrchr
* ft_strncmp
* ft_strnstr
* ft_strjoin
* ft_strtrim
* ft_split
* ft_substr
* ft_striteri
* ft_strmapi

## Memory functions

* ft_memset
* ft_bzero
* ft_memcpy
* ft_memmove
* ft_memchr
* ft_memcmp
* ft_calloc

## Conversion functions

* ft_atoi
* ft_itoa

## File descriptor functions

* ft_putchar_fd
* ft_putstr_fd
* ft_putendl_fd
* ft_putnbr_fd

## Linked list functions

* ft_lstnew
* ft_lstadd_front
* ft_lstsize
* ft_lstlast
* ft_lstadd_back
* ft_lstdelone
* ft_lstclear
* ft_lstiter
* ft_lstmap

---

# Instructions

## Compilation

To compile the library:

```bash
make
```

This creates the static library:

```bash
libft.a
```

To clean object files:

```bash
make clean
```

To remove object files and the library:

```bash
make fclean
```

To rebuild everything:

```bash
make re
```

---

## Usage

Include the header file in your project:

```c
#include "libft.h"
```

Compile your program together with the library:

```bash
cc main.c libft.a
```

---

# Resources

## References

* The Linux manual pages:
  https://man7.org/linux/man-pages/

* The GNU C Library documentation:
  https://www.gnu.org/software/libc/manual/

* the gitbook guide by Simon Aeby & Laura Fabbiano:
  https://42-cursus.gitbook.io/guide

---

## AI Usage

AI tools were used during the development of this project after consulting my peers and primarily for:

* debugging assistance
* understanding compiler and memory errors
* clarifying concepts related to pointers, linked lists, and function pointers
* reviewing edge cases
* guidance during testing
* assistance in formulating the README

All implementation, debugging decisions, testing, and final code integration were completed manually.

---

# Notes

This project was developed as part of the 42 curriculum and is intended as a foundational library for future C projects.
