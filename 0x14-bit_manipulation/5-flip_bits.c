#include "main.h"
/**
  * flip_bits - flip bits from one no. to another
  * @n: no. 1
  * @m: no. 2
  *
  * Return: no. of bits
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, count = 0;
	unsigned long int xor, chec = 1;

	xor = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (chec == (xor & chec))
			count += 1;
		chec <<= 1;
	}
	return (count);
}
