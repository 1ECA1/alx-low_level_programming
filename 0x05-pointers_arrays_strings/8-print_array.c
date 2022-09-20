#include <stdio.h>
#include "main.h"

/**
 * print_arry - print n elements of arry
 * @a: arry
 * @n: number of elements
 * Return: nothing
 */
void print_arry(int *a, int n)
{
int inc;
for (inc = 0; inc < n ; inc++)
{
if (inc != n - 1)
printf("%d, ", a[inc]);
else
printf("%d", a[inc]);
}
putchar(10);
}
