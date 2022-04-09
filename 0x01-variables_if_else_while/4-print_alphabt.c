#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0.
*/
int main(void)
{
char alph;

for (alph = 'a'; alph <= 'z'; alph++)
{
if (alph == 'q')
continue;

else if (alph == 'e')
continue;

putchar(alph);
}

putchar('\n');

return (0);
}
