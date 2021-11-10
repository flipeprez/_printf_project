#include "main.h"
/**
 * convert_base - recursively prints an int into binary, octal or hex
 * @n: number to print
 * @base: base to convert to
 * Return: number of printed bytes
 */
int convert_base(unsigned int n, int base)
{
	int largo = 0, res;

	if (n != 0)
	{
		res = (n % base);
		largo += convert_base((n / base), base);

		/* checks for the characters of hexa (a, b, c, d, e, f) */
		if (res >= 10 && base == 16)
			_putchar(res + 87); /*adds the character lower case to res*/
		else
			_putchar(res + '0');

		largo++;
	}
	return (largo);
}
/**
 * print_b - prints a decimal in binary
 * @ap: list of arguments
 * Return: number of printed digits
 */
int print_b(va_list ap)
{
	unsigned int n = va_arg(ap, int);

	return (convert_base(n, 2));
}

/**
 * print_o - prints a decimal in octal
 * @ap: list of arguments
 * Return: number of printed digits
 */
int print_o(va_list ap)
{
	unsigned int n = va_arg(ap, int);

	return (convert_base(n, 8));
}
/**
 * print_hex - prints a decimal in hex
 * @ap: list of arguments
 * Return: the number of printed digits
 */
int print_hex(va_list ap)
{
	unsigned int n = va_arg(ap, int);

	return (convert_base(n, 16));
}
