#include "lists.h"

/**
 * sum_dlistint - Sum all data (n) of a dlistint_t linked list
 * @head: Pointer to head of dlistint_t list
 *
 * Return: Sum result
 */

int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	while (head)
	{
		sum += (*head).n;
		head = (*head).next;
	}
	return (sum);
}
