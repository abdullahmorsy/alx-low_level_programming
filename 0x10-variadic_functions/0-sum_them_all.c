#include "variadic_functions.h"

/**
 * sum_them_all - Calculate the sum of its parameters
 * @n: The number of parameters
 * @...: The parameters to sum
 *
 * Return: The sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}

