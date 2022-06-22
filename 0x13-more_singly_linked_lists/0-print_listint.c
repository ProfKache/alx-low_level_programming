#include "lists.h"

/**
 * print_listint - function that prints all the elements of
 * a listint_t list.
 *
 * @h: Parameter Pointer to the head of the linked list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}

