#include "lists.h"

/**
 * add_nodeint -a function  adds a new node at the beginning of a linked list
 * @head: a pointer to the first nodet
 * @n: a data to be inserted in the new created nodee
 *
 * Return: right pointer to the new node, or NULL if it was wrong
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
