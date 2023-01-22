#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdarg.h>
int get_flags(const char *format, int *i);
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list ap);
int print_str(va_list ap);
int print_int(va_list ap);
int print_binary(va_list ap);
int print_unint(va_list ap);
int print_octal(va_list ap);
int print_hex(va_list ap);
int print_hex_s(va_list ap);
int print_pres(void);
int ascii_hex(int char_int);
int print_strhex(va_list ap);
int print_ptr(va_list ap);
int print_rstr(va_list ap);
int print_r13(va_list ap);
/* get_flag */
int get_flag(char s, flags_t *f);
void handle_flags(char flag)
void init_params(params_t *params, va_list ap)	
	unsigned int plus_flag		: 1;
	unsigned int space_flag		: 1;
	unsigned int hashtag_flag	: 1;
	unsigned int zero_flag		: 1;
	unsigned int minus_flag		: 1;	
/**
 * struct op - operation
 * @op_type: print type
 * @func: calling function
 */
typedef struct op
{
	char op_type;
	int (*func)();
} op_t;
#endif
