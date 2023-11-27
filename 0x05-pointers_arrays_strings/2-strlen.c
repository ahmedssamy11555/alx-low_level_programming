/**
 * _strlen -  function that returns the length of a string.
 *
 *Description:  function that returns the length of a string.
 *@s: integer parameter
 *Return: int parameter
 */

int _strlen(char *s)
{
int start;
int result;

if (*s == '\0')
{
return (0);
}
for (start = 0; s[start] != '\0'; start++)
{
result =  start;
}
return (result + 1);
}
