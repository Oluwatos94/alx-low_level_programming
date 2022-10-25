#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: A pointer to the address of the head of
 * the listint_t list.
 *
 * Return: If the linked listis empty - 0.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
