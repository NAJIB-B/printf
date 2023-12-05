#include <stdarg.h>
#include "main.h"

/**
 * print_number - prints a decimal from va_list args
 * @n: number to be printed
 *
 * Return: number of character printed
 */
int print_number(int n)
{
	int size = 0;

	if ((n / 10) !=  0)
	{
		print_number(n / 10);
	}

	_putchar('0' + (n % 10));
	++size;
	return (size);
}

/**
 * print_decimal - prints a decimal from va_list args
 * @args: arguments to print decimal from
 *
 * Return: number of character printed
 */
int print_decimal(va_list args)
{
	int d;

	d = va_arg(args, int);

	return (print_number(d));
}
