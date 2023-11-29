#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 *@a: int parameter
 *@n: int parameter
 */


void reverse_array(int *a, int n)
{
int end = n - 1;
int start;
for (start = 0; start < end; start++)
{
int temp = a[start];
a[start] = a[end];
a[end] = temp;

end--;
}
}
