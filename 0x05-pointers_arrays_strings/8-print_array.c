#include "main.h"
#include <stdio.h>


/**
 * print_array - prints n elements of an array of integers
 * @a: integer parameter
 * @n: integer parameter
 */
void print_array(int *a, int n)
{
int end = n;
int start;
for (start = 0; start < end; start++)
{
if (start == end - 1)
{
printf("%d", a[start]);
}
else
{
printf("%d, ", a[start]);
}
}
printf("\n");
}
