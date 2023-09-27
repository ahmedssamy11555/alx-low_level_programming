#include "main.h"


/**
* print_sign - prints sign of input
*
* Description: prints **sign of input**
*@n : integar parameter
* Return:
*1 and prints + if n is greater than zero
* or 0 and prints 0 if n is zero,
* -1  prints - if n is less than zero
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
return (0);
}
}
