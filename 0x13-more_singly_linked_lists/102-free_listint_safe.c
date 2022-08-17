#include "lists.h"
#include <stdlib.h>
/**
**free_listint_safe - a function that frees a list
**@h: input head of linked list
**return: size of list that was freed
*/
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


