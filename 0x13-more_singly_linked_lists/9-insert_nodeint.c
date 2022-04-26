#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at a given position
 * @head: pointer to heade pointer
 * @idx: place to insert int
 * @n: integer
 *
 * Return: node or NULL when fail
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *new1;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new1 = *head;
	for (i = 0; i < (idx - 1); i++)
	{
		if (new1 == NULL || new1->next == NULL)
			return (NULL);
		new1 = new1->next;
	}

	new->next = new1->next;
	new1->next = new;
	return (new);
}
