#include "main.h"
/**
  * set_bit - sets the value of a bit to 1
  * @n: num to look thro
  * @index: indx to use
  *
  * Return: 1 if it worked, or -1 if an error occurred
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int shtd;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	shtd = 1 << index;
	*n = *n | shtd;
	return (1);
}
