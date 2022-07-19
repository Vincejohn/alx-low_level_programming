#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - pops off the head of the list and returns its contents
 * @head: head of the list
 * Return: contents of head
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	hnode = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (hnode);
}
