#include "variadic_functions.h"
/**
 *sum_them_all - Function that returns the sum of all its parameters
 *@n: Parameters
 *@...: Variadic
 *Return: Sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int x = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);
	for (; x < n; x++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
