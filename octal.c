#include "main.h"

/**
* _oct_helper - func that prints oct.
* @n:     Numbers
* Return: bytes that it writes.
*/
int _octal(unsigned int num)
{
    unsigned int oct = 0, rem, i = 1;

    while (num != 0)
    {
        rem = num % 8;
        num /= 8;
        oct += rem * i;
        i *= 10;
    }

    return (oct);
}
