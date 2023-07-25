#include "main.h"

/**
* _putnbr - prints a number n
* takes a number and then prints each digit
* @n: number to be printed.
* Return: void
*/
int _putnbr(int n)
{
	int i = 0;

	if (n == -2147483648)
	{
		while (INT_MIN__[i])
			i += _putchar(INT_MIN__[i]);

		return (i);
	}

	if (n < 0)
	{
		i += _putchar('-');
		n = -n;
	}

	if (n <= 9 && n >= 0)
	{
		i += _putchar(n % 10 + '0');
		return (i);
	}

	if (n / 10)
		i += _putnbr(n / 10);

	i += _putchar(n % 10 + '0');
	return (i);
}
