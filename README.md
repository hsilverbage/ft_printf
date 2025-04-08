# ft_printf – 42 Project

`ft_printf` is a custom implementation of the standard `printf` function in C.  
This project is part of the common core at École 42, and aims to develop a deep understanding of variadic functions, formatted output, and low-level C programming.

---

## 🎯 Project Objectives

- Recreate the behavior of the C standard `printf` function
- Handle variadic arguments with `va_list`
- Parse and process format specifiers
- Manage memory and edge cases without using the standard `printf`

---

## ✅ Supported Format Specifiers

The following conversions are implemented:

| Specifier | Description                     |
|----------:|---------------------------------|
| `%c`      | Character                       |
| `%s`      | String                          |
| `%p`      | Pointer address (hexadecimal)   |
| `%d`      | Signed decimal integer          |
| `%i`      | Signed decimal integer          |
| `%u`      | Unsigned decimal integer        |
| `%x`      | Unsigned hexadecimal (lowercase)|
| `%X`      | Unsigned hexadecimal (uppercase)|
| `%%`      | Literal percent sign            |

---

## ⚙️ Compilation

To compile the library and run example programs:

```bash
make
```

You can include `ft_printf.a` in your own projects as follows:

```c
#include "ft_printf.h"
```

Link it during compilation:

```bash
gcc main.c libftprintf.a
```

---

## 📁 Project Structure

```
ft_printf/
│
├── ft_printf.c       # Entry point and dispatcher
├── utils/            # Helper functions (itoa, strlen, putchar, etc.)
├── conversions/      # Individual format specifier handling
├── ft_printf.h       # Header file
├── Makefile          # Build instructions
└── test/             # Optional test files
```

---

## 🧪 Testing

You can test the function with various inputs:

```c
ft_printf("Hello %s, number: %d\n", "world", 42);
```

You can also compare the output with the standard `printf` for consistency:

```c
printf("Standard: %d\n", num);
ft_printf("Custom:   %d\n", num);
```

---

## 📚 Useful References

- [`man 3 printf`](https://man7.org/linux/man-pages/man3/printf.3.html)

---

## 👤 Author
  
**42 Login**: hsilverb
**Contact**: [LinkedIn](https://www.linkedin.com/in/henrik-silverbage/)

---

## 📝 License

This project is part of the 42 School curriculum.  
For learning and academic use only.
