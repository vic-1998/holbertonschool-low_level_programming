#include "lists.h"

/**
 * add_nodeint_end -adds a new end of linked list
 * @head: double pointer to a linked list
 * @n: string to add to the new node
 * Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if  (*head == NULL)
	{
		*head = new;
	} else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}

		tmp->next = new;
	}
	return (new);
}
