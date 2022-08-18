#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
**free_listint_safe - a function that frees a listint_t list safely (ie.
**can free lists containing loops)
**@h: A pointer to the address of
**the head of the listint_t list.
**
**return: size of list that was freed
**Description: The function sets the head to NULL.
**/
size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;
	listint_t *temp;

	temp = *h;
	while (temp)
	{
		temp = *h;
		temp = temp->next;
		free_list(temp);
		counter++;
	}
	*h = NULL;

	return (counter);
}

/**
 * free_list - A function that frees a listint_t recursivel
 * @head: A pointer to the listint_t structure
 * return: nothing
 */
void free_list(listint_t *head)
{
	listint_t *temp;

	if (head)
	{
		temp = head;
		temp = temp->next;
		free(temp);
		free_list(temp);
	}
	free(head);
}
