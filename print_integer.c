#include <stdarg.h>
#include "main.h"

/**
 * print_integer - prints a integer from va_list args
 * @args: arguments to print integer from
 *
 * Return: number of character printed
 */
int print_integer(va_list args)
{
	int d;

	d = va_arg(args, int);

	return (print_number(d));
}
