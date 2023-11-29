
#include "main.h"
/**
 * _strncat - function appends the src string to
 *the dest string, overwriting the terminating null byte
 *(\0) at the end of dest,
 *and then adds a terminating null byte
 *string pointed to by src, including the terminating
 *null byte (\0), to the buffer pointed to by dest.
 * @name: char parameter
 *Return: a pointer to the resulting string dest
 */

void print_name(char *name, void (*f)(char *)){

    while (*name != '\0') {
        f(name);
        name++;
    }
}