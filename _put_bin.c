#include "main.h"

/**
* put_bin - prints the binary representation of an integer
* @n: the integer to print in binary
* Return: the number of characters printed
*/
int _put_bin(int n)
{
    int i = 0;

	if (n < 0)
    {
        i += _putchar('-');
        n = -n;
    }
        
    if (n == 0 || n == 1)
        return _putchar('0' + n);
      
    if (n / 2)
        i += _put_bin(n / 2);

    i += _putchar(n % 2 + '0');
        return (i);
}
