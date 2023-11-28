#include "main.h"
/**
 * _strcpy - function that copies the
 *string pointed to by src, including the terminating
 *null byte (\0), to the buffer pointed to by dest.
 * @dest: integer parameter
 * @src: integer parameter
 * Return: Return value: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int length = 0;
int start;
while (src[length] != '\0')
{
length++;
}
for (start = 0; start <= length; start++)
{
dest[start] = src[start];
}
return (dest);
}
