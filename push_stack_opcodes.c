#include "monty.h"
/**
 * push_node_end - add new node at the end of a
 * stack_t list
 * @head: pointer to pointer of first node of stack list
 * @n: an integer value to be pushed to stack node
 *
 * Return: address of new element or NULL
 */
stack_t *push_node_end(stack_t **head, int n)
{
	stack_t *new_node;
	stack_t *temp = *head;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(stack_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	while (temp->next)
	temp = temp->next;
	temp->next = new_node;
	new_node->prev = temp;
	return (new_node);
}
/**
 * push_node - add new node at the end of a
 * stack_t list
 * @n: an integer value to be pushed to stack node
 *
 * Return: address of new element or NULL
 */
bool push_node(int value)
{
        if (atoi(value))
        {
                push_node_end(*head, value);
		return (true);
	}
	else
	{
		
}

