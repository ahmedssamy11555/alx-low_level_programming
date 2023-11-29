#include "main.h"
/**
 * _strcat - function appends the src string to
 *the dest string, overwriting the terminating null byte
 *(\0) at the end of dest,
 *and then adds a terminating null byte
 *string pointed to by src, including the terminating
 *null byte (\0), to the buffer pointed to by dest.
 * @dest: char parameter
 * @src: char parameter
 *Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int dest_start, src_start, dest_end = 0;
for (dest_start = 0; dest[dest_start] != '\0'; dest_start++)
{
dest_end++;
}
for (src_start = 0; src[src_start] != '\0'; src_start++)
{
dest[dest_end] = src[src_start];
dest_end++;
}
dest[dest_end] = '\0';
return (dest);
}

