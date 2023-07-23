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
			return extra_specs(spec, arg_list);
		}
	}
}

/**
* extra_specs: function that handles extra fmt specs.
* spec: specifier.
* arg_list: printf args
* Return: written byte count
*/
int extra_specs(int spec, va_list arg_list)
{
	int nbytes = 0;
	hex_t hx = (spec == 'X') ? UPPERCASE_X : LOWERCASE_X;
	long int num;

	switch (spec)
	{
		case 'u': {
			num = va_arg(arg_list, long int);
			return (_put_uint((unsigned int) num));
		} break;
		case 'x':
		case 'X': {
			return (_puthex_man(arg_list, hx));
		} break;
		case 'p': {
			return _putptr_t(va_arg(arg_list, void *));
		} break;
		default: {
			nbytes += _putchar('%');
			nbytes += _putchar(spec);
		} break;
	}

	return (nbytes);
}


int _putptr_t(void *ptr)
{
	uintptr_t address;
	int rm;
	int sz  = 17;
	int offset = 10;
	int lst = sz - 1;
	char buffer[17] = { 0 };

	if (ptr == NULL)
		return (_puts("(null)"));

	buffer[lst--] = 0;
	address = (uintptr_t)ptr;

	do {
		rm = address % 16;

		if (rm < offset)
			buffer[lst--] = '0' + rm;
		else
			buffer[lst--] = 'a' + (rm - offset);

		address /= 16;
	} while(address > 0);
	
	buffer[lst--] = 'x';
	buffer[lst--] = '0';
	return _puts(buffer + lst + 1);
}
