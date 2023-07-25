#include "main.h"

/**
 * convert_byte - a function that converts a byte into hex.
 * @byte: input byte
 * @buff: buffer that will hold hex.
 */
void convert_byte(char byte, char *buff)
{
	int fst = (byte % 16);
	int sec = ((byte / 16) % 16);

	buff[1] = (fst < 10) ? fst + '0' : fst + 'A' - 10;
	buff[0] = (sec < 10) ? sec + '0' : sec + 'A' - 10;
	buff[2] = 0;
}

/**
* _special_print - function that prints in a special way.
* @s: string to print.
* Return: (int) => bytes it printed.
*/
int _special_print(char *s)
{
	int idx = 0;
	int count = 0;
	char buff[3];

	if (s == NULL)
		return (_puts("(nil)"));

	while (s[idx] != 0)
	{
		if (s[idx] >= 127 || (s[idx] < 32 && s[idx] > 0))
		{
			convert_byte(s[idx], buff);
			count += _puts("\\x");
			_puts(buff);
			count += 2;
			idx++;
			continue;
		}

		count += _putchar(s[idx]);
		idx++;
	}

	return (count);
}
