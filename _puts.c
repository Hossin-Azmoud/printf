#include "main.h"
/**
 * _strlen - function that returns the length of a string.
 * @s: pointer to the string.
 * Return: int length of the string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != 0)
		count++;

	return (count);
}

/**
* _puts - a function that prints a string
* @str: pointer to string to be printed.
* Return: int, how much it printed.
*/
int _puts(char *str)
{
	int size;

	if (str == NULL)
		return (_puts("(null)"));

	size = _strlen(str);
	write(1, str, size);
	return (size);
}
