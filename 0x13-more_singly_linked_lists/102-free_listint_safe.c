#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
**free_listint_safe - a function that frees a listint_t list safely (ie.
**can free lists containing loops)
**@h: A pointer to the address of
**the head of the listint_t list
**return: size of list that was freed
**Description: The function sets the head to NULL.
**/
size_t free_listint_safe(listint_t **h)
{
size_t i = 0, j;
listint_t *temp, *check, *copy = *h;
while (*h)
{
i++;
temp = *h;
*h = (*h)->next;
free(temp);
check = copy;
j = 0;
while (j < i)
{
if (*h == check)
{
*h = NULL;
return (i);
}
check = check->next;
j++;
}
}
return (i);
}
