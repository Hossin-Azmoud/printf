#include "main.h"

int _hex_helper(unsigned int n, int bound)
{
	int nbytes = 0;
	
	do {
		if (n % 16 <= 15 && n % 16 >= 10)
			nbytes += _putchar((n % 16 - 10) + bound);
		if (n % 16 < 10)
			return (_putchar((n % 16) + '0'));

		n /= 16;
	} while (n > 0);

	return (nbytes);
}

int _puthex_man(unsigned int hex, hex_t type)
{
	int nbytes = 0;
	int bound = 'a';

	switch(type)
	{
		case LOWERCASE_X: {
			bound = 'a';
		} break;

		case UPPERCASE_X: {
			bound = 'A';
		} break;
		case PTR: {
			nbytes += _puts("0x");
			printf("\nprinting %x\n", hex);
		} break;

		default:
			return (nbytes);
	}
	
	nbytes += _hex_helper(hex, bound);
	return nbytes;
}
