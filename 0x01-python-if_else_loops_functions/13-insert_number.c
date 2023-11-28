#include <stdlib.h>
#include "lists.h"

/**
 *  * insert_node - Inserts a number into a sorted singly linked list.
 *   *
 *    * @head: Double pointer to a singly linked list
 *     * @number: Value of the new node.
 *      *
 *       * Return: The address of the new node, or NULL if it failed.
 *        */
listint_t *insert_node(listint_t **head, int number)
{
    listint_t *new_node = malloc(sizeof(listint_t));
    listint_t *temp = *head;
    listint_t *prev = NULL;

    if (!new_node)
        return NULL;

    new_node->n = number;
    new_node->next = NULL;

    if (!temp || number <= temp->n)
    {
        new_node->next = *head;
        *head = new_node;
        return new_node;
 										    }
 
    while (temp && number > temp->n)
    {
        prev = temp;
        temp = temp->next;
     }

    new_node->next = temp;
    prev->next = new_node;
 
    return new_node;
}

