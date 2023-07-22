#include "main.h"
/**
 * _printf_manager_ - manage the printf
 * @spec: the argument
 * @arg_list: list of arg
 * Return: the chars
 */
int _printf_manager_(char spec, va_list arg_list)
{
	if (spec == 'd' || spec == 'i')
		return (_putnbr(va_arg(arg_list, int)));

	if (spec == 'c')
		return (_putchar(va_arg(arg_list, int)));

	if (spec == '%')
		return (_putchar('%'));

	if (spec == 's')
		return (_puts(va_arg(arg_list, char *)));

	return (-1);
}
