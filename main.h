#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>

char _putchar(char);
int _printf(const char *format, ...);
/**
 * struct op_t - opciones
 *
 * @op: option
 * @f: function to execute
 */
typedef struct op_t
{
	char *op;
	int (*f)(va_list ap);
} opciones;

int print_s(va_list ap);
int print_c(va_list ap);
int print_d(va_list ap);
int print_b(va_list ap);
int print_o(va_list ap);
int print_hex(va_list ap);
opciones structops(int f);
#endif
