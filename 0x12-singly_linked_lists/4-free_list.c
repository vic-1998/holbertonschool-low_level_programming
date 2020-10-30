#include "lists.h"

/**
 * free_list - frees a list_t
 * @head: pointer to start of the list
 * Return: void
 */
void free_list(list_t *head)
{
	if (head == NULL)
	{
		free(head);
		return;
	}
	free_list(head->next);
	free(head->str);
	free(head);
}
