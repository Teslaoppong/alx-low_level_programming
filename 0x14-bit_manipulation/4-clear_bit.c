#include "main.h"
/**
  * clear_bit - sets the value of a bit to 0
  * @n: num to look thro
  * @index: index to use
  *
  * Return: 1 if it worked, or -1 if an error occurred
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int shtd;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	shtd = ~(1 << index);
	*n = *n & shtd;
	return (1);
}
