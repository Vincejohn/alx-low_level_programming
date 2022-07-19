#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - define function
 * @head: describe argument
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
