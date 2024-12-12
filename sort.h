#ifndef SORT_H
#define SORT_H

<<<<<<< HEAD
#include <stdio.h>
#include "sort.h"
=======
#include <stddef.h>
>>>>>>> afbdb50 (task 02)

/**
 * struct listint_s - Doubly linked list node
 *
<<<<<<< HEAD
 * @n: Integer  stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */

=======
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
>>>>>>> afbdb50 (task 02)
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

<<<<<<< HEAD
/* Prototypes for mandatory tasks */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);

// Prototypes des fonctions
void swap(int *a, int *b);
void print_array(const int *array, size_t size);
=======
/* Print functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* Selection sort function */
void selection_sort(int *array, size_t size);
>>>>>>> afbdb50 (task 02)

#endif /* SORT_H */
