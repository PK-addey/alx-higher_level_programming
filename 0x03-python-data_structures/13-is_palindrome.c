#include "lists.h"
#include <stdlib.h>

/**
 * reverse_list - Reverses a singly linked list.
 * @head: Pointer to the pointer to the head of the list.
 *
 * Return: Pointer to the new head of the reversed list.
 */
listint_t *reverse_list(listint_t **head)
{
    listint_t *prev = NULL;
    listint_t *current = *head;
    listint_t *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *head = prev;
    return *head;
}

/**
 * is_palindrome - Checks if a singly linked list is a palindrome.
 * @head: Pointer to the pointer to the head of the list.
 *
 * Return: 1 if it is a palindrome, 0 otherwise.
 */
int is_palindrome(listint_t **head)
{
    listint_t *slow = *head;
    listint_t *fast = *head;
    listint_t *second_half = NULL;
    listint_t *prev_of_slow = NULL;
    int result = 1;

    if (*head == NULL || (*head)->next == NULL)
        return (1);

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        prev_of_slow = slow;
        slow = slow->next;
    }

    if (fast != NULL)
    {
        second_half = slow->next;
    }
    else
    {
        second_half = slow;
    }

    prev_of_slow->next = NULL;
    second_half = reverse_list(&second_half);

    listint_t *first_half = *head;
    while (second_half != NULL)
    {
        if (first_half->n != second_half->n)
        {
            result = 0;
            break;
        }
        first_half = first_half->next;
        second_half = second_half->next;
    }

    if (result == 1)
    {
        return (1);
    }

    return (0);
}

