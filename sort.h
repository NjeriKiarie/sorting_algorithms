#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - doubly linked list node.
 *
 * @n: Integer stored in the node.
 * @prev: Pointer to the previous element in the list
 * @next: Pointer to the next element in the list.
 */

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
}
listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

void swap(int *arr, int idx1, int idx2);
void bubble_sort(int *array, size_t size);
void bubble_sort(int *array, size_t size);
listint_t *create_listint(const int *array, size_t size);
void swap_list(listint_t *pv, listint_t *temp, listint_t *nxt,
		listint_t **head);
void swap_int(int *c, int *k);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
int len_list(listint_t *h);
void quick_sort(int *array, size_t size);
void quick_recursion(int *array, int left, int right, size_t size);
int partition(int *array, int left, int right, size_t size);
void shell_sort(int *array, size_t size);
void switch_nodes(listint_t **list, listint_t **p);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void merge_recursion(int *arr, int *array, size_t left, size_t right);

#endif
