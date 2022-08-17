#include "lists.h"
/**
 *insert_nodeint_at_index - A function that inserts node at given index
 *@head: A pointer to listint_t structure
 *@idx: The index of the list
 *@n: An integer data for new node
 *Return: The address to new node at specified index, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp_node = *head;
	unsigned int i = 0;

	while (temp_node && i < idx - 1)
	{
		temp_node = temp_node->next;
		i++;
	}
	if (temp_node || (i == idx - 1 || idx == 0))
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node)
		{
			new_node->n = n;
			if (idx == 0)
			{
				new_node->next = *head;
				*head = new_node;
			}
			else
			{
				new_node->next = temp_node->next;
				temp_node->next = new_node;
			}
			return (new_node);
		}
	}
	return (NULL);
}
