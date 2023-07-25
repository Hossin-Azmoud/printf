#include "main.h"

/**
* _oct_helper - func that prints oct.
* @n:     Numbers
* Return: bytes that it writes.
*/
int _octal(unsigned int n)
{
	int i = 0;


	if (n <= 9)
	{
		i += _putchar(n % 10 + '0');
		return (i);
	}
	if (n / 10)
		i += _octal(n / 10);

	i += _putchar(n % 10 + '0');
	return (i);
}
