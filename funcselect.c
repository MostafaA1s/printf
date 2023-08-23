#include "main.h"

/**
 * funcSelector - select from specifiers list
 * @args: arguements
 * @charCount: printed char count
 * @format: the format specifier
 * Return: charCount
 */

int funcSelector(const char *format, va_list args, int charCount)
{
	switch (*format)
	{
		case 'c':
			_putchar(va_arg(args, int));
			charCount++;
			break;
		case 's':
			charCount = print_string(args, charCount);
			break;
		case '%':
			_putchar('%');
			charCount++;
			break;
		default:
			break;
	}
	return (charCount);
}
