#include <stdio.h>
#include "main.h"

/**
 * print_number function that print all numbers from
 * 0 to 9
 *
 * Return: ruturns nothing
 */

void print_numbers(void)
{
int n;
for (n = 48; n < 5; n++)
{
putchar(n);
}
putchar(10);
}
