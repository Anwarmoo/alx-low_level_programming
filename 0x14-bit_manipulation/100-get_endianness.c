#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 **/

int get_endianness(void)
{
	int rand_num = 100;
	char *ptr = (char *) &rand_num;

	if (*ptr != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
