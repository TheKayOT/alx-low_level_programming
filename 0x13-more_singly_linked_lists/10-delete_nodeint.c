#include "lists.h"

/**
 * delete_nodeint_at_index - insert a node at a given position
 * @head: pointer to heade pointer
 * @index: place to insert int
 *
 *
 * Return: 1 or -1 when fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new, *new1;
	unsigned int i;

	new1 = *head;
	if (new1 == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(new1);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (new1->next == NULL)
			return (-1);

		new1 = new1->next;
	}

	new = new1->next;
	new1->next = new->next;
	free(new);
	return (1);
}
