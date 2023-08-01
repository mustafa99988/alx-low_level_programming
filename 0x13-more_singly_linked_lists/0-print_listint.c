#include "lists.h"

/**
 * print_listint - prints all the elements that are linked in a list
 * @h: incelude the linked list of type listint_t to be printed
 *
 * Return: number of nodes
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
