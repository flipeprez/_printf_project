#include "main.h"
/**
 * print_s - prints
 * @ap: arguments
 * Return: length of string
 */
int print_s(va_list ap)
{
	int largo = 0;
	char *s = va_arg(ap, char*);

	if (!s)
		largo = _printf("(null)");
	else
		for (; s[largo]; largo++)
			_putchar(s[largo]);

	return (largo);
}
/**
 * print_c - print char
 * @ap: arguments.
 * Return:char.
 */
int print_c(va_list ap)
{
	int largo = 0;
	char c = va_arg(ap, int);

	_putchar(c);
	largo++;

	return (largo);
}
/**
 * convert_d - print number
 * @n: number to print
 * Return: number of digits
 */
int convert_d(int n)
{
	int largo = 0;
	unsigned int aux;

	if (n < 0)
	{
		_putchar('-');
		largo++;
		aux = -n;
	}
	else
		aux = n;

	if (aux / 10)
	{
		largo += convert_d(aux / 10);
	}
	_putchar((aux % 10) + '0');
	largo++;
	return (largo);
}

/**
 * print_d - prints a number
 * @ap: arguments
 * Return: number of printed digits
 */
int print_d(va_list ap)
{
	int d = va_arg(ap, int);

	return (convert_d(d));
}
