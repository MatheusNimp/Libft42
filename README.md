# Libft

**Libft** is a C library developed as part of the 42 curriculum, aimed at recreating standard C functions and implementing additional utility functions useful for development.

## Objective

The main goal of this project is to strengthen understanding of:

- String and memory manipulation in C
- Low-level functions (`malloc`, `free`, `write`, etc.)
- Safe error handling and robust function behavior
- Modular and structured development in C

## Features

The library includes implementations of common functions such as:

- **String manipulation:** `ft_strlen`, `ft_strcpy`, `ft_strjoin`, `ft_strtrim`, `ft_substr`, `ft_strchr`, `ft_strncmp`, and more
- **Memory management:** `ft_memset`, `ft_memcpy`, `ft_memmove`, `ft_bzero`, etc.
- **Type conversion:** `ft_itoa`, `ft_atoi`
- **Utility functions:** safe memory allocation and parameter validation

Each function is implemented following **best practices in C programming**, focusing on safety, efficiency, and compliance with the expected behavior of standard C functions.

## Project Structure



Project Structure
libft/
├── includes/
│   └── libft.h
├── srcs/
│   ├── ft_strlen.c
│   ├── ft_strjoin.c
│   ├── ft_strtrim.c
│   ├── ft_itoa.c
│   └── ... (other functions)
└── Makefile




- `includes/libft.h` — headers and function prototypes  
- `srcs/` — function implementations  
- `Makefile` — compiles the library with `make`, generating `libft.a`

## How to Use

1. Clone the repository:

```bash
git clone <REPOSITORY_URL>
```
2. Compile the library:
```bash
make
```
3. Include the library in your project:
```bash
#include "libft.h"
```
