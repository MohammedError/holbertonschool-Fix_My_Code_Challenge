#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - delete a node at a specific index from a list
 *
 * @head: A pointer to the first element of a list
 * @index: The index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *saved_head;
	dlistint_t *tmp;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	saved_head = *head;
	while (saved_head->prev != NULL)
		saved_head = saved_head->prev;

	i = 0;
	while (saved_head != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = saved_head->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				tmp->next = saved_head->next;
				if (saved_head->next != NULL)
					saved_head->next->prev = tmp;
			}
			free(saved_head);
			return (1);
		}
		tmp = saved_head;
		saved_head = saved_head->next;
		i++;
	}
	return (-1);
}
