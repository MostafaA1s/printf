#include "main.h"

/**
 * print_char - print char
 * @args: args
 * @charCount: printed char count
 * Return: charCount
 */

int print_char(va_list args, int charCount)
{
	int ch = va_arg(args, int);

	_putchar(ch);
	return (charCount + 1);
}
