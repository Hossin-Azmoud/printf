#include "main.h"

/**
 * _printf - a function that produces output according to a format
 * @format: the fomrat to be respected
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list arg_list;
	int res;
	int idx    = 0;
	int nbytes = 0;

	va_start(arg_list, format);
	if (format == NULL)
		return (-1);

	while (*(format + idx))
	{
		if (*(format + idx) == '%')
		{
			idx++;
			idx = _chop_spaces(format, idx);
			if (*(format + idx) == 0)
				return (-1);

			res = _printf_manager_(*(format + idx), arg_list);

			if (res == -1)
				return (-1);

			nbytes += res;
			idx++;
			continue;
		}
		nbytes += _putchar(*(format + idx));
		idx++;
	}

	return (nbytes);
}
