#include "main.h"
#include <stdio.h>
/**
* _puts - a function that prints a string
* @str: pointer to string to be printed.
* Return: int, how much it printed.
*/
int _puts(char *str)
{
    int a = 0;

    if (str == NULL)
        return (_puts("(null)"));

    while (*(str + a))
    {
        if (*(str + a) < 32 || *(str + a) >= 127)
        {
            printf("\\x%02X", *(str + a));
        }
        else
        {
            _putchar(*(str + a));
        }
        a++;
    }

    return (a);
}