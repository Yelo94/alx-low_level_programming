#include "main.h"

#include <stdio.h>
/**
 *_memset - fills n bytes of memory with a constant value
 *@s: pointer to memory area
 *@b: constant byte to fill with
 *@n: num bytes to fill in
 *Return: memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
int size = n;
if (size > 0)
{
int i;
for (i = 0; i < size; i++)
s[i] = b;
}
return (s);
}
