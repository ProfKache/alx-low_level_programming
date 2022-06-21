#include "lists.h"
/**
 * add_node_end - function that adds a new_node node at the end of a
 * list_t list.
 * @head: Parameter that point to de head of the
 * linked list
 * @str: Parameter with the string
 * Return: the address of the new_node element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	temp = *head;
	if (!(*head))
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
