#include "lists.h"
/**
 * add_nodeint_end - Function that adds a new node at the end
 * of a listint_t list.
 *
 * @head: Parameter double pointer that point to the head of
 * the linked list
 * @n: Parameter with the value of the number data
 *
 * Return: The new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}

	return (new_node);
}
