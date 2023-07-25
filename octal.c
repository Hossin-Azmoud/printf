#include "main.h"
/**
* _octal - func that prints oct.
* @num:     Numbers
* Return: bytes that it writes.
*/
int _octal(unsigned int num)
{
	int sz = 16;
	int idx = sz - 1;
	char buffer[16];

	buffer[idx--] = 0;

	do {
		buffer[idx] = ((num % 8) + '0');
		num /= 8;
		idx--;
	} while (num > 0);

	return (_puts(buffer + idx + 1));
}
