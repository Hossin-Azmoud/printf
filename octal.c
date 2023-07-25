#include "main.h"
#include <stdio.h>
/**
* _octal - func that prints oct.
* @num:     Numbers
* Return: bytes that it writes.
*/
int _octal(unsigned int num)
{
	int sz = 16;
	int size = 0;
	int idx = sz - 1;
	char buffer[16];

	buffer[idx--] = 0;
	do {
		buffer[idx--] = ((num % 8) + '0');
		num /= 8;
		size++;
	} while (num > 0);

	for (; idx < sz; idx++)
		_putchar(buffer[idx]);

	return (size);
}
