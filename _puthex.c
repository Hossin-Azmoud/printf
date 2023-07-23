#include "main.h"

/**
* _hex_helper - func that prints hex.
* @n:     Number
* @bound: the starting pont of hex (a | A)
* Return: bytes that it writes.
*/
int _hex_helper(unsigned int n, int bound)
{
	int nbytes     = 0;
	unsigned int m = n;
	int offset     = bound - 10;

	if (m / 16)
		nbytes += _hex_helper(m / 16, bound);

	nbytes += _putchar(((m % 16) < 10 ? (m % 16) + '0' : (m % 16) + offset));
	return (nbytes);
}

/**
* _puthex_man - function that prints hex.
* @hex: Number
* @type: type of printer.
* Return: bytes that it writes.
*/
int _puthex_man(va_list va_args, hex_t type)
{
	long int tmp = va_arg(va_args, long int);
	unsigned int hex;
	int nbytes = 0;
	int bound = 'a';
	
	if (tmp < 0)
		hex = (unsigned int) UINT_MAX + tmp;
	else
		hex = (unsigned int) tmp;

	switch (type)
	{
		case LOWERCASE_X: {
			bound = 'a';
		} break;

		case UPPERCASE_X: {
			bound = 'A';
		} break;
		default:
			return (nbytes);
	}

	nbytes += _hex_helper(hex, bound);
	return (nbytes);
}
