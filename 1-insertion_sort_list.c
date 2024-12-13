#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list using insertion sort
 * @list: Double pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *insert_point, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;
	while (current != NULL)
	{
		temp = current;
		current = current->next;

		/* Find the right position to insert temp */
		insert_point = temp->prev;
		while (insert_point != NULL && insert_point->n > temp->n)
		{
			/* Swap nodes */
			if (insert_point->prev != NULL)
				insert_point->prev->next = temp;
			else
				*list = temp;

			if (temp->next != NULL)
				temp->next->prev = insert_point;

			/* Adjust pointers for the swap */
			temp->prev = insert_point->prev;
			insert_point->next = temp->next;
			insert_point->prev = temp;
			temp->next = insert_point;

			/* Print list after each swap */
			print_list(*list);

			/* Move insert point back */
			insert_point = temp->prev;
		}
	}
}
