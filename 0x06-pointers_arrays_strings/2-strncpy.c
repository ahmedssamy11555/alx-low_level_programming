#include "main.h"
/**
 * _strncpy - function that copies the
 *string pointed to by src, including the terminating
 *null byte (\0), to the buffer pointed to by dest.
 * @dest: char parameter
 * @src: char parameter
 * @n: char parameter
 * Return: Return value: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int src_length = 0;
int start;
while (src[src_length] != '\0')
{
src_length++;
}
for (start = 0; start < n && dest[src_length] != '\0'; start++)
{
dest[start] = src[start];
}
return (dest);
}
