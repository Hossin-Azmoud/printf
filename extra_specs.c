#include "main.h"

/**
* extra_specs: function that handles extra fmt specs.
* @spec: specifier.
* @arg_list: printf args
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
			return (_putptr_t(va_arg(arg_list, void *)));
		} break;
		default: {
			nbytes += _putchar('%');
			nbytes += _putchar(spec);
		} break;
	}

	return (nbytes);
}
