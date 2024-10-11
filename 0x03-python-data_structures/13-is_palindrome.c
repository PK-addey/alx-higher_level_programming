#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* reverse_listint - Reverses a singly linked list
* @head: Pointer to the head of the list
* Return: Pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL, *next = NULL, *current = *head;

while (current != NULL)
{
next = current->next;
current->next = prev;
prev = current;
current = next;
}

*head = prev;
return (*head);
}

/**
* is_palindrome - Checks if a singly linked list is a palindrome
* @head: Double pointer to the head of the list
* Return: 1 if palindrome, 0 otherwise
*/
int is_palindrome(listint_t **head)
{
listint_t *slow = *head, *fast = *head, *first_half, *second_half;

if (*head == NULL || (*head)->next == NULL)
return (1);

/* Find the middle of the list */
while (fast != NULL && fast->next != NULL)
{
slow = slow->next;
fast = fast->next->next;
}

/* Reverse the second half of the list */
second_half = reverse_listint(&slow);

/* Compare the first half with the reversed second half */
first_half = *head;
while (second_half != NULL)
{
if (first_half->n != second_half->n)
return (0);
first_half = first_half->next;
second_half = second_half->next;
}

return (1);
}

