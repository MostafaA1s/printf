#include "main.h"

/**
 * _printf - implementation of the inbuilt printf
 * @format: the format specifier
 * Return: the formated string
 */

int _printf(const char *format, ...)
{
	int printCount = 0;

	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			printCount = funcSelector(format, args, printCount);
			format++;
		}
		else
		{
			_putchar(*format);
			printCount++;
			format++;
		}
	}
	va_end(args);
	return (printCount);
}
