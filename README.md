# _printf
`_printf` is a re-implementation of the standard C library function printf. It provides a way to format and print data, similar to **printf**.

### Usage

```C
int _printf(const char *format, ...);
```

The `_printf` function takes in a format string, followed by any additional arguments specified in the format string. The format string consists of regular characters, which are simply printed, and conversion specifiers, which are replaced by the values of the corresponding arguments.

### Conversion Specifiers

The following conversion specifiers are currently supported by _printf:

| formatter | Description     |
| ---- | ------------------------------ |
| `%c` | Prints a single character.     |
| `%s` | Prints a string of characters. |
| `%d` | Prints an integer (decimal). |
| `%i` | Prints an integer (decimal). |
| `%b` | Prints a binary number. |
| `%u` | Prints an unsigned integer. |
| `%o` | Prints an octal number. |
| `%x` | Prints a hexadecimal number (lowercase). |
| `%X` | Prints a hexadecimal number (uppercase). |
| `%r` | Prints a string in reverse. |
| `%R` | Prints a string in rot13 encryption. |

### Example

```C
_printf("Hello, %s!\n", "world");
```

This will output:

```
Hello, world!
```

### Limitations

- _printf does not support all the format specifiers of the standard printf function.
- _printf does not support floating point numbers.
- _printf does not support the width and precision field of the format specifiers.
- _printf does not handle invalid format strings or conversion specifiers.

### Additional Information

- _printf is not intended to be a full replacement for printf, but rather a demonstration of how the printf function can be implemented.
- The implementation of _printf may differ from the implementation of printf in the standard C library.

### Contributing

If you would like to contribute to the development of `_printf`, please feel free to submit pull requests or issues on the GitHub repository.

### Attribution

`_printf` function was created by @androidmini9x & @souadhelmy as a project for **Alx School**.

