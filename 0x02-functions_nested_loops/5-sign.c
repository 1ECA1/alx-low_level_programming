#include "main.h"

/**
 * print_sign - function to check for a sign of a number
 *
 * @n: is that int that will use for the argument
 * Return: 0
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < o)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}