#include "main.h"

void print_integer(int m);

/**
 * print_number - a function that prints an integer.
 * @n: An input integer
 * Return: Nothing
 */
void print_number(int n)
{
	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		_putchar('-');
		print_integer(-n);
	}
	else
		print_integer(n);
}

/**
 * print_integer - A function to print n.
 * @m: an input unsigned integer
 * Return: Nothing
 */
void print_integer(int m)
{
	int i = 1;

	while (m / i >= 10)
		i *= 10;

	while (i > 0)
	{
		_putchar('0' + (m / i));
		m %= i;
		i /= 10;
	}
}

