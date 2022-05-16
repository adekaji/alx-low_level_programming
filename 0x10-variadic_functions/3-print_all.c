#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: points types of arguments in the function.
 *
 * Return: Always 0.
 */

void print_all(const char * const format, ...)

{
va_list l;
unsigned int a = 0;
unsigned int b;
unsigned int c = 0;
char *str;
const char arg[] = "cifs";

va_start(l, format);
while (format && format[a])

{
b = 0;
while (arg[b])

{
if (format[a] == arg[b] && c)
{
printf(", ");
break;
}

b++;

}
switch (format[a])

{
case 'c':
printf("%c", va_arg(l, int)), c = 1;
break;
case 'a':
printf("%d", va_arg(l, int)), c = 1;
break;
case 'f':
printf("%f", va_arg(l, double)), c = 1;
break;
case 's':
str = va_arg(l, char *), c = 1;
if (!str)

{
printf("(nil)");
break;
}

printf("%s", str);
break;
}
a++;
}
printf("\n"), va_end(l);
}
