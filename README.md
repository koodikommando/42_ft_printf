# ft_printf

A custom implementation of the C `printf` function as part of the 42 curriculum. The `ft_printf` project involves recreating the standard `printf` function to gain a deeper understanding of variadic functions, formatting, and handling variable data types in C.

## **Overview**

The `ft_printf` project replicates a simplified version of the C `printf` library function. It supports various format specifiers. The project aims to reinforce knowledge of string manipulation and variadic functions.

## **Features**

- **Supported Conversions**: Handles conversions like `%c`, `%s`, `%d`, `%i`, `%u`, `%x`, `%X`, `%p`, and `%%`.
- **Error Handling**: Mimics `printf` behavior when encountering errors or invalid format specifiers.

## **Usage**

### 1. Clone the Repository

```bash
git clone https://github.com/koodikommando/42_ft_printf.git
cd ft_printf
```

### 2. Compilation

Compile the library with the provided Makefile:

```bash
make
```

This will generate `libftprintf.a`, which you can link with other projects to use the `ft_printf` function.

### 3. Using ft_printf

To use `ft_printf` in your code, include the header file and link the library:

```c
#include "ft_printf.h"
```

Example usage:

```c
ft_printf("Hello, %s! You have %d new messages.\n", "Alice", 5);
```

## **Supported Conversions**

| Specifier | Description                    |
|-----------|--------------------------------|
| `%c`      | Character                      |
| `%s`      | String                         |
| `%p`      | Pointer address                |
| `%d`/`%i` | Signed decimal integer         |
| `%u`      | Unsigned decimal integer       |
| `%x`      | Unsigned hexadecimal (lowercase) |
| `%X`      | Unsigned hexadecimal (uppercase) |
| `%%`      | Prints a literal `%` character |

