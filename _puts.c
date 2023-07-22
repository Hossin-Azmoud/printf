#include "main.h"

/**
* _puts - a function that prints a string
* @str: pointer to string to be printed.
* Return: int, how much it printed.
*/
int _puts(char *str)
{
	int a = 0;

	if (!str)
		return _puts("(null)");

	while (*(str + a))
	{
		_putchar(*(str + a));
		a++;
	}

	return (a);
}
