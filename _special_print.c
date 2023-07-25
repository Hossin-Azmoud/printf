#include "main.h"
/**
* _special_print - function that prints in a special way.
* @s: string to print.
* Return: (int) => bytes it printed.
*/

int _special_print(char *s)
{
	int idx = 0;
	int count = 0;

	while (s[idx] != 0)
	{
		if (s[idx] >= 127 || (s[idx] < 32 && s[idx] > 0))
		{
			count += _puts("\\x");
			count += _hex_helper((unsigned int) s[idx], 'A');
			idx++;
			continue;
		}

		count += _putchar(s[idx]);
		idx++;
	}

	return (count);
}
