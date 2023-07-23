#include "main.h"
/**
 * _printf_manager_ - manage the printf
 * @spec: the argument
 * @arg_list: list of arg
 * Return: the chars
 */
int _printf_manager_(char spec, va_list arg_list)
{
	switch (spec)
	{
		case 'd':
		case 'i': {
			return (_putnbr(va_arg(arg_list, int)));
		} break;
		case '%': {
			return (_putchar('%'));
		} break;
		case 'c': {
			return (_putchar(va_arg(arg_list, int)));
		} break;
		case 's': {
			return (_puts(va_arg(arg_list, char *)));
		} break;
		default: {
			return (extra_specs(spec, arg_list));
		}
	}
}
