#include "main.h"

/**
 * print_square -  function that prints a square, followed by a new line.
 *
 * Description:  function that prints a square, followed by a new line.
 *@size : integer parameter
 * Return: void
 */

void print_square(int size)
{
int start = 0;
int end = size;
int j;
int n;
if (end == 0)
{
_putchar('\n');
}
else
{
for (n = start; n < end; n++)
{
for (j = start; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
