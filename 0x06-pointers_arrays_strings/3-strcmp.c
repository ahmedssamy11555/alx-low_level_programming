#include "main.h"
/**
 * _strcmp - function that copies the
 *string pointed to by src, including the terminating
 *null byte (\0), to the buffer pointed to by dest.
 *@s1: char parameter
 *@s2: char parameter
 * Return: 0 if s1 and s2 are equal
 * positive value if s1 > s2
 * negative value if s1 < s2
 */
int _strcmp(char *s1, char *s2)
{
int s1_lenght = 0;
int s2_lenght = 0;
while (s1[s1_lenght] != '\0')
{
s1_lenght++;
}
while (s2[s2_lenght] != '\0')
{
s2_lenght++;
}
if (s1_lenght == s2_lenght)
{
return (0);
}
else if (s1_lenght > s2_lenght)
{
return (15);
}
else
{
return (-15);
}
}
