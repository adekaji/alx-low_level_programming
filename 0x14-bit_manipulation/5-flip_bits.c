#include "main.h"

/**
 * flip_bits - counts the number of bits to flip
 * around 
 * @n: points to number 1
 * @m: points to number 2
 * t is the count
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, t = 0;
	unsigned long int num;
	unsigned long int special = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		num = special >> i;

		if (num & 1)
			t++;
	}

	return (t);
}
