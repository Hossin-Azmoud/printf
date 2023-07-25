#include "main.h"
/**
 * _put_bin - Prints the binary representation of an integer
 * @n: The integer to print in binary
 * Return: The number of characters printed
 */
int _put_bin(unsigned int n)
{
	unsigned int mask = 1 << ((sizeof(unsigned int) * 8) - 1);
	int i = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
			i++;
		}
		else if (i > 0)
		{
			_putchar('0');
			i++;
		}
		mask >>= 1;
	}

	return (i);
}
