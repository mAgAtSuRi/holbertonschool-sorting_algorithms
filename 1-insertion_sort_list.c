#include "sort.h"

/**
 * swap - swap 2 nodes
 * @list: nodes to swap are in this list
 * @node_prev: first node to swap
 * @node: second node to swap
 */
void swap(listint_t **list, listint_t *node_prev, listint_t *node)
{
	if (list == NULL || node_prev == NULL || node == NULL)
		return;

	node_prev->next = node->next;
	if (node->next != NULL)
		node->next->prev = node_prev;

	node->prev = node_prev->prev;
	if (node_prev->prev != NULL)
		node_prev->prev->next = node;
	else
		*list = node;
	node_prev->prev = node;
	node->next = node_prev;
}

/**
 * insertion_sort_list - sorts a doubly linked list using
 * insertion sort algorithm https://www.youtube.com/watch?v=ROalU379l3U&t=148s
 * @list: list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node;
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	node = (*list)->next;
	while (node != NULL)
	{
		while (node->prev != NULL && node->n < node->prev->n)
		{
			swap(list, node->prev, node);
			node = node->prev;
		}
		node = node->next;
	}
}
