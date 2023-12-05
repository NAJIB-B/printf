#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - custom implementation of printf function
 * @format: string to be printed and format specifiers
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int printed_size = 0, string_size = 0, i, spe_mode = 0;
	va_list args;

	int (*printer)(va_list);

	if (format == NULL)
		return (-1);

	va_start(args, format);

	string_size = _strlen(format);

	for (i = 0; i < string_size; ++i)
	{
		if (spe_mode == 1)
		{
			printer = get_format_function(format[i]);
			printed_size += printer(args);
			spe_mode = 0;
		}
		else
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == 'c' || format[i + 1] == 's')
				{
					spe_mode = 1;
					continue;
				}
			}
			_putchar(format[i]);
			++printed_size;
		}
	}
	_putchar('\n');
	return (printed_size);
}
