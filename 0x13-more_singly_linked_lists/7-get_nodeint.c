#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a
 * listint_t linked list.
 *
 * @head: Parameter that point to the head of the linked list
 * @index: Parameter with the index of the node, starting at 0
 *
 * Return: the position of the element which ask for
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new_node = head;
	unsigned int i;

	if (!head)
		return (NULL);
	for (i = 0; i < index && new_node; i++)
	{
		if (new_node->next == NULL)
			return (NULL);
		new_node = new_node->next;
	}
	return (new_node);
}

