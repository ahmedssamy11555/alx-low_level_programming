#include "main.h"

/**
 * print_last_digit - Returns the value of the last digit
 *
 * Description: prints ** computes the absolute value of an integer.**
 *@c : integar parameter
 * Return: Returns the value of the last digit
 */

int print_last_digit(int c)
{
int last_digit = c % 10;
if (last_digit < 0)
{
last_digit = last_digit * -1;
}
_putchar('0' + last_digit);
return (last_digit);
}
