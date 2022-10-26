#include "main.h"
/**
  * print_binary - print bin
  * @n: converted to bin
  */
void print_binary(unsigned long int n)
{
	unsigned long int and, div;
	char f;

	div = _pow_(2, sizeof(unsigned long int) * 8 - 1);
	for (; div != 0; div >>= 1)
	{
		and = n & div;
		if (and == div)
		{
			f = 1;
			_putchar('1');
		}
		else if (f == 1 || div == 1)
			_putchar('0');
	}
}
/**
  * _pow_ - perform exponentiation
  * @base: the base
  * @exp: the exponent
  *
  * Return: base to the power of exp
  */
unsigned long int _pow_(unsigned int base, unsigned int exp)
{
	unsigned int i;
	unsigned long int ans = 1;

	for (i = 1; i <= exp; i++)
		ans *= base;
	return (ans);
}
