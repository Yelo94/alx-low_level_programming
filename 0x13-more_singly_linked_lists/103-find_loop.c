#include "lists.h"

/**
 *find_listint_loop - A function that finds the loop in a list
 *@head: A pointer to listint_t structure
 *Return: The address of the node where the loop start, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *temp = head, *check;	
if (!head)
return (NULL);
if (head == head->next)
return (head);
while (temp)
{
temp = temp->next;
check = head;
while (temp && check != temp)
{
if (check == temp->next)
return (check);
check = check->next;
}
}
return (temp);
}
