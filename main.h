#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int _printf(const char *format, ...);
int _putchar(char ch);
int funcSelector(const char *format, va_list args, int charCount);
int print_char(va_list args, int charCount);
int print_string(va_list args, int charCount);

#endif
