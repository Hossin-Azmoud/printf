#include "main.h"
/**
* _putptr_t - function check the %
* @ptr: check the arg
* Return: always 0.
*/
int _putptr_t(void *ptr)
{
	uintptr_t address;
	int rm;
	int sz  = 17;
	int offset = 10;
	int lst = sz - 1;
	char buffer[17] = { 0 };

	if (ptr == NULL)
		return (_puts("(nil)"));

	buffer[lst--] = 0;
	address = (uintptr_t)ptr;

	do {
		rm = address % 16;

		if (rm < offset)
			buffer[lst--] = '0' + rm;
		else
			buffer[lst--] = 'a' + (rm - offset);

		address /= 16;
	} while (address > 0);

	buffer[lst--] = 'x';
	buffer[lst--] = '0';

	return (_puts(buffer + lst + 1));
}
