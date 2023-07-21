# printf
A C printf clone that implements its basic functionality.

# util functions
`_putchar(char c)`: func that prints characters. one character in particular.
`_puts(char *str)`: func that prints strings.
`_putnbr(int n)`:   func that prints numbers.

# unimplemented funcs
`_putunbr(unsigned int n)`: func that prints unsigned int.
`_puthex(int n)`: func that prints the hex representation of a number.
`_putsrev(char *str)`: func that prints a reversed string.
`_printf(const char *format, ...)`: the func that uses all the other simple and small functions to produce an output. (haha)
# testing:
testing the return value of a func (printed bytes size):


````c
#include "main.h"
#include <assert.h>
#include <string.h>

/**
* assertion method.
* assert(output == expectation && err_message);
*/

/**
* main - function that checks printing.
* Return: always success.
*/ 
int main(void)
{
	char *hello = "Hello world!";
	char zero   = '0';
	int  nbr    = 101;
	
	assert(_putchar(zero) && "_putchar failed.");
	_putchar('\n');

	assert(_puts(hello) == (int)strlen(hello) && "_puts failed.");
	_putchar('\n');

	assert((_putnbr(nbr) == 3) && "The _putnbr func is wrong..");
	_putchar('\n');

	return (0);
}

````
