#include "lists.h"

/**
 * free_listint - asdasd
 * @head: asdasd
 * Return: asdasd
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
