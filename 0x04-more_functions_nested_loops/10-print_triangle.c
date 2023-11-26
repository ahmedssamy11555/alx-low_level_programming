#include "main.h"



/**
 * print_triangle - prints a triangle, followed by a new line.
 *
 * Description: prints a triangle, followed by a new line.
 *@size: int parameter
 */
void print_triangle(int size)
{
int row;
int column;
int space;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (row = 0 ; row < size; row++)
{
for (space = 0 ; space < size - row - 1; space++)
{
_putchar(' ');
}
for (column = 0 ; column < row + 1; column++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
