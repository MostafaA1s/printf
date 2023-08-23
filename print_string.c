#include "main.h"

/**
 * printf_string - print string
 * @args: args
 * @charCount: printed char count
 * Return: charCount
 */

int print_string(va_list args, int charCount)
{
	char *str = va_arg(args, char *);

	while (*str != '\0')
	{
		_putchar(*str);
		charCount++;
		str++;
	}
	return (charCount);
}
