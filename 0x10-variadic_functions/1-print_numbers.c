#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list l;
	unsigned int a;

	va_start(l, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(l, int));

		if (separator && a < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(l);
}
