#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *			in ascending order using the insertion
 *			sort algorithm.
 * @list: Input list to sort
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *pv, *nxt;

	if (list && *list && (*list)->next)
	{
		temp = (*list)->next;
		pv = temp->prev;
		nxt = temp->next;

		while (temp)
		{
			if (temp->n < pv->n)
			{
				swap_list(pv, temp, nxt, list);
			}
			temp = nxt;
			if (temp)
			{
				nxt = temp->next;
				pv = temp->prev;
			}
		}
	}
}

/**
 * swap_list - Swaps the position of two nodes in a linked list
 * @head: head of the list
 * @pv: previous node
 * @temp: temp
 * @nxt: next node
 */

void swap_list(listint_t *pv, listint_t *temp, listint_t *nxt,
		listint_t **head)
{
	while (pv && temp->n < pv->n)
	{
		if (nxt)
			nxt->prev = pv;
		temp->next = pv;
		temp->prev = pv->prev;
		if (pv->prev)
			(pv->prev)->next = temp;
		pv->prev = temp;
		pv->next = nxt;
		nxt = pv;
		pv = temp->prev;
		if ((*head)->prev)
			*head = (*head)->prev;
		print_list(*head);
	}
}
