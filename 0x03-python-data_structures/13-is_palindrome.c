#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint - Adds a new node with an integer value at the beginning of a listint_t linked list
 * @head: Pointer to a pointer pointing to the head of the list
 * @n: Integer value to be added to the linked list
 *
 * Return: Address of the newly added element (new node) or NULL if memory allocation failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
/**
 * is_palindrome - Checks if a listint_t singly linked list is a palindrome
 * @head: Pointer to the head of the listint_t linked list
 *
 * Return: 1 if the list is a palindrome, 0 otherwise
 */
int is_palindrome(listint_t **head)
{
	listint_t *head2 = *head;
	listint_t *aux = NULL, *aux2 = NULL;

	if (*head == NULL || head2->next == NULL)
		return (1);
	while (head2 != NULL)
	{
		add_nodeint(&aux, head2->n);
		head2 = head2->next;
	}
	aux2 = aux;
	while (*head != NULL)
	{
		if ((*head)->n != aux2->n)
		{
			free_listint(aux);
			return (0);
		}
		*head = (*head)->next;
		aux2 = aux2->next;
	}
	free_listint(aux);
	return (1);
}


