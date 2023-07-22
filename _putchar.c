#include "main.h"
/**
* _putchar - prints one character
* @c: character to be printed
* Return: 1 if the character was written
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
