#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

/**
 * struct specifier_formats - struct holding the specifier format for printf
 * @format: character indicating format to be used
 * @f: function to be returned based on function
 */
typedef struct specifier_formats
{
	char format;
	int (*f)(va_list args);
} sp_f;

int _strlen(const char *s);
int _printf(const char *format, ...);
void _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int (*get_format_function(char c))(va_list args);

#endif
