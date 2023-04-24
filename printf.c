#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * _printf - function that produces output according to a format
 * @format: format
 *
 * Return: the number of characters printed(excluding null byte)
 */

int _printf(const char *format, ...)
{
	char b;
	char *s;

	va_list z;

	va_start(z, format);

	if (format == NULL)
	{
		return (-1);
	}
	else if (*format == '%')
	{
		format++;
		if (*format == 'c')
		{
			b = va_arg(z, int);
			putchar(b);
		}
		else if (*format == 's')
		{
			s = va_arg(z, char*);
			printf("%s", s);
		}
		else if (*format == 'd' || *format == 'i')
		{
			a = va_arf(z, int);
			printf("%d", a);
		}
		else
		{
			return (-1);
		}
		va_end(z);
	}
	return (0);
}
