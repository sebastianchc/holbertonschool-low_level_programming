#include "lists.h"

/**
 * sum_listint - Sum all data (n) of a list.
 * @head: Head list.
 *
 * Return: Sum.
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (!head)
	{
		return (0);
	}
	while (head)
	{
		sum = sum + (*head).n;
		head = (*head).next;
	}
	return (sum);
}
