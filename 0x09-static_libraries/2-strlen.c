#include "main.h"

/**
*_strlen - length of a string
*@s: A pointer to an int that will be updated
*
*Return: void that means our answer is correct
*/

int _strlen(char *s)

{
int x;

x = 0;
while (s[x] != '\0')
{
x++;
}
return (x);
}
