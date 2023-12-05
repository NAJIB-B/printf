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
	int printed_size = 0, string_size = 0, i, spe_mode = 0, j, fmt_arr_size = 0;
	char formats_array[] = {'c', 's', 'd', 'i'};
	va_list args;

	int (*printer)(va_list);

	if (format == NULL)
		return (-1);
	va_start(args, format);
	fmt_arr_size = sizeof(formats_array) / sizeof(formats_array[0]);
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
				for (j = 0; j < fmt_arr_size; ++j)
				{
					if (formats_array[j] == format[i + 1])
					{
						spe_mode = 1;
						break;
					}
				}
				if (spe_mode == 1)
					continue;
			}
			_putchar(format[i]);
			++printed_size;
		}
	}
	return (printed_size);
}
