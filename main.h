#ifndef MAIN_PRINT_F_HEADER
#define MAIN_PRINT_F_HEADER

#define INT_MIN__    "-2147483648"
#define INT_MIN__LEN 11

#include <unistd.h>
int  _printf(const char *format, ...);
int  _putchar(char c);
int  _puts(char *str);
int  _putnbr(int n);
#endif /* MAIN_PRINT_F_HEADER */
