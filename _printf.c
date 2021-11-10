#include <stdarg.h>
#include "main.h"
/**
 * _printf - our own printf function
 *
 * @format: format to print in screen
 *
 * Return: number of bytes printed
 */
int _printf(const char *format, ...)
{
	int ltotal = 0, pos_f, pos_op;
	va_list ap;
	opciones ops[] = {
		{"s", print_s},
		{"c", print_c},
		{"d", print_d},
		{"i", print_d},
		{"b", print_b},
		{"o", print_o},
		{"x", print_hex},
		{NULL, NULL}
	};
	va_start(ap, format);
	if (!format)
		return (-1);
	for (pos_f = 0; format[pos_f]; pos_f++)
	{
		if (format[pos_f] == '%')
		{
			if (!format[pos_f + 1])
				return (-1);
			if (format[pos_f + 1] == '%')
			{
				_putchar('%'), pos_f++, ltotal++;
				continue;
			}
			for (pos_op = 0; ops[pos_op].op; pos_op++)
				if (ops[pos_op].op[0] == format[pos_f + 1])
				{
					ltotal += ops[pos_op].f(ap), pos_f++;
					break;
				}
			if (!ops[pos_op].op)
				_putchar(format[pos_f]), ltotal++;
		}
		else
			_putchar(format[pos_f]), ltotal++;
	}
	va_end(ap);
	return (ltotal);
}
