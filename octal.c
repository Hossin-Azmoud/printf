#include "main.h"

/**
* _oct_helper - func that prints oct.
* @n:     Number
* @bound: the starting pont of oct (a | A)
* Return: bytes that it writes.
*/
int _octal(unsigned int n, int bound)
{
	int nbytes     = 0;
	unsigned int m = n;
	int offset     = bound - 10;

	if (m / 8)
		nbytes += _oct_helper(m / 8, bound);

	nbytes += _putchar(((m % 8) < 10 ? (m % 8) + '0' : (m % 8) + offset));
	return (nbytes);
}
