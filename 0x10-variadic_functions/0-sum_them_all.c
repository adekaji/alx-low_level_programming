#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: points to the prameters.
 *
 * Return: If n == 0 - 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list l;
	unsigned int a;
	int sum = 0;


	if (n == 0)
		return (0);
	
	va_start(l, n);


	for (a = 0; a < n; a++)
		sum += va_arg(l, int);

	va_end(l);

	return (sum);
}
