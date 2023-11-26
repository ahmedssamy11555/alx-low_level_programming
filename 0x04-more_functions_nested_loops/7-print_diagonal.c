#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * Description: draws a diagonal line on the terminal.
 *@n : integer parameter
 * Return: void
 */

void print_diagonal(int n)
{
int start = 0;
int end = n;
int j;
if (end == 0)
{
_putchar('\n');
}
else
{
for (n = start; n < end; n++)
{
for (j = 0 ; j < n; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
