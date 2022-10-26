#include "main.h"
/**
  * get_bit - value of bit at given indx
  * @n: num to look thro
  * @index: indx used
  *
  * Return: value of the bit at index or -1
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int shtd, and;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	shtd = 1 << index;
	and = n & shtd;
	if (and == shtd)
		return (1);
	return (0);
}
