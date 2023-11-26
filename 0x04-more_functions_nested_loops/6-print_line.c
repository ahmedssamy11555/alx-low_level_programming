#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 *
 * Description: draws a straight line in the terminal.
 *@n : integer parameter
 * Return: void
 */

void print_line(int n)
{
int start = 0;
int end = n;
if (end == 0)
{
_putchar('\n');
}
else
{
for (n = start; n < end; n++)
{
_putchar('_');
}
_putchar('\n');
}
}
