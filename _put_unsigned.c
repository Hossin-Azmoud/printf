#include "main.h"
/**
* _put_uint - a func that print positive ints.
* @n: Number
* Return: number of bytes that it prints
*/

int _put_uint(unsigned int n)
{

	int i = 0;

	if (n <= 9)
		return (_putchar(n % 10 + '0'));

	if (n / 10)
		i += _putnbr(n / 10);

	i += _putchar(n % 10 + '0');
	return (i);
}
