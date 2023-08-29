#include "list.h"

/**
 * listint_len - asdasd
 * @h: asdasd
 * Return: asdasd
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
