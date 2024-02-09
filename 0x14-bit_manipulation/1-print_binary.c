#include "main.h"

/**
 * _pow - Calcule la puissance de 2.
 * @x: Le nombre à élever à la puissance de 2.
 * @y: L'exposant.
 *
 * Return: La valeur de x élevée à la puissance de y.
 *
 * Description: Cette fonction calcule la valeur de x élevée à la puissance de y.
 */

unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int a;

	num = 1;
	for (a = 1; a <= power; a++)
		num *= base;
	return (num);
}


void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag;

	flag = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}

}
