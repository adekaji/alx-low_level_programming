#include"main.h"

/**
*_puts - print a string
*@str: A pointer to an int that will be changed/ updated
*
*Return: void which means our answer is correct
*/

void _puts(char *str)
{
char *c;
int x;

c = str;

for (x = 0; c[x]; x++)
{
_putchar (c[x]));
}
_putchar['\n');
