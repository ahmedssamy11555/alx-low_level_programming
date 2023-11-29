#include "main.h"
/**
 * _strncat - function appends the src string to
 *the dest string, overwriting the terminating null byte
 *(\0) at the end of dest,
 *and then adds a terminating null byte
 *string pointed to by src, including the terminating
 *null byte (\0), to the buffer pointed to by dest.
 * @dest: char parameter
 * @src: char parameter
 * @n: integr parameter
 *Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int src_start, dest_end = 0;
while (dest[dest_end] != '\0')
{
dest_end++;
}
for (src_start = 0; src_start < n && src[src_start] != '\0'; src_start++)
{
dest[dest_end] = src[src_start];
dest_end++;
}
dest[dest_end] = '\0';
return (dest);
}
