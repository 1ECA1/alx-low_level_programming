#include "main.h"

/**
 * _islower - function to chec the lower case characetr
 *  * @c: is the int thatbwill be used for the argumento of the function
 *  Return: 0
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
return (0);
}
