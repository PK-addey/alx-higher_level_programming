#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - singly linked list node
 * @n: integer
 * @next: points to the next node
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

listint_t *reverse_list(listint_t **head);
int is_palindrome(listint_t **head);

#endif /* LISTS_H */
