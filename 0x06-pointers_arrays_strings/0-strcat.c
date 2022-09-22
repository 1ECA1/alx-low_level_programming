#include "main.h"
#include <stdio.h>

/**
 * main - cheak the code
 *
 * Return: always zero
 *
 */

int main(void)
{
char s1[98] = "Hello";
char s2[] = "World";
int length, l;

length = 0;
while (s1[length] != '\0')
{
++length;
}

for (l = 0; s2[l] != '\0'; ++l, ++length)
{
s1[length] = s2[l];
}

s1[length] = '\0';
printf("After concatenation: ");
puts(s1);
return (0);
}
