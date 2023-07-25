#ifndef MAIN_PRINT_F_HEADER
#define MAIN_PRINT_F_HEADER

#define INT_MIN__    "-2147483648"
#define INT_MIN__LEN 11

#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
#include <stdint.h>
/**
 * enum hex_e - an enum to specify states of printing hex nums
 * an enum to specify states of printing hex nums
 * @LOWERCASE_X: Lowercase x state.
 * @UPPERCASE_X: Uppercase x state.
 */
typedef enum hex_e
{
	LOWERCASE_X,
	UPPERCASE_X
} hex_t;

int _printf(const char *format, ...);
int _printf_manager_(char spec, va_list arg_list);
int extra_specs(int spec, va_list arg_list);
int _putchar(char c);
int _puts(char *str);
int _putnbr(int n);
int _put_bin(unsigned int n);
int _put_uint(unsigned int n);
int _chop_spaces(const char *s, int idx);
int _puthex_man(va_list va_args, hex_t type);
int _hex_helper(unsigned int n, int bound);
int _putptr_t(void *ptr);
int _octal(unsigned int n);
int _strlen(char *s);
int _special_print(char *s);
#endif /* MAIN_PRINT_F_HEADER */
