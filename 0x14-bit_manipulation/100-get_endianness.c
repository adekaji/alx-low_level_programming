#include "main.h"

/**
 * get_endianness - checks for big endian or little endian
 * Return: 0 = big endian, 1 = little endian
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *)&x;

    return (*c);
}
