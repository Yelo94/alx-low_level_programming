#include "main.h"
/**
 *_strcpy - Copy a string
 *@dest: Destination value
 *@src: Source value
 *Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i;

i = 0;

while (i >= 0)
{

dest[i] = src[i];

if (src[i] == '\0')
return (dest);

i++;
}
return (dest);
}
