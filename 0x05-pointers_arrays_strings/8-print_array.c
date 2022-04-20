#include "main.h"
#include <stdio.h>

/**
*print_array - prints n elements of an array of integers
*@a: A pointer to an int thst will be changed
*@n: return the value n
*Return: void which means our answer is currect
*/


void print_array(int *a, int n)

{
int i;

i = 0;

while (i < n)
{
printf("%d", a[i]);

if (i < n - 1)
{
printf(", ");
}

i++;
}

printf("\n");

}
