#include "lists.h"

/**
 * add_nodeint - adds a number nodes at the beeginning of a linked list
 * @head: pointrs to the node in the list.
 * @n: data to insert in that new code.
 *
 * Return: pointer to the new codde code, or NULL icf it fails
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
