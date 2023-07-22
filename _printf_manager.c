#include "main.h"
/**
 * _printf_manager_ - manage the printf
 * @spec: the argument
 * @arg_list: list of arg
 * Return: the chars
 */
int _printf_manager_(char spec, va_list arg_list)
{
	long int num;
	int written = 0;

	if (spec == 'd' || spec == 'i')
		return (_putnbr(va_arg(arg_list, int)));

	if (spec == 'c')
		return (_putchar(va_arg(arg_list, int)));

	if (spec == '%')
		return (_putchar('%'));

	if (spec == 's')
		return (_puts(va_arg(arg_list, char *)));

	if (spec == 'x')
	{
		num = va_arg(arg_list, long int);
		if (num < 0)
			return (_puthex_man((unsigned int) UINT_MAX + num, LOWERCASE_X));
		return (_puthex_man((unsigned int)num, LOWERCASE_X));
	}

	if (spec == 'X')
	{
		num = va_arg(arg_list, long int);
		if (num < 0)
			return (_puthex_man((unsigned int) UINT_MAX + num, UPPERCASE_X));
		return (_puthex_man((unsigned int)num, UPPERCASE_X));
	}

	if (spec == 'u')
	{
		num = va_arg(arg_list, long int);
		return (_put_uint((unsigned int) num));
	}
	written += _putchar('%');
	written += _putchar(spec);
	return (written);
}
