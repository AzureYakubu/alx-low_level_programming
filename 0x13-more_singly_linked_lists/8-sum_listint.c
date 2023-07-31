#include <stdlib.h>
#include "lists.h"

/**
  * sum_listint - function for the sum of all the data
  * @head: node
  *
  * Return: the sum of all the data
  */
int sum_listint(listint_t *head)
{
	int amount = 0;

	if (head)
	{
		while (head)
		{
			amount += head->n;
			head = head->next;
		}
	}

	return (amount);
}
