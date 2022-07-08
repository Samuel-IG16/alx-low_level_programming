#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list
 * @head: pointer to the beginning of the linked list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
