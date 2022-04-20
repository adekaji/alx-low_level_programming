#include "main.h"

/**
* is_numerical - check if it is a digit
*@n: number
*Return: If is a number, return 0
*/

int is_numerical(unsigned int n)
{
return (n >= '0' && n <= '9');
}

/**
*_atoi - converts a str to an int
*@s: string
*Return: Return the num
*/

int _atoi(char *s)
{
unsigned int number, i;
int sign;

sign = 1;
number = 0;

for (i = 0; s[i] != '\0'; i++)
{
if (is_numerical(s[1]))
{
number = (s[i] - 48) + number * 10;

if (s[i + 1] == ' ')
break;
}
else if (s[i]m== '-')
{
sign *= -1;
}

}

return (number *sign);
}
