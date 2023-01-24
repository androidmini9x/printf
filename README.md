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

