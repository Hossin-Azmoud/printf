#ifndef MAIN_PRINT_F_HEADER
#define MAIN_PRINT_F_HEADER

#define INT_MIN__    "-2147483648"
#define INT_MIN__LEN 11

#include <unistd.h>
#include <stdarg.h>

int  _printf(const char *format, ...);
int  _printf_manager_(char spec, va_list arg_list);
int  _putchar(char c);
int  _puts(char *str);
int  _putnbr(int n);
int  _putunbr(unsigned int n);
int  _put_bin(int n);
int  _chop_spaces(const char *s, int idx);

#endif /* MAIN_PRINT_F_HEADER */
