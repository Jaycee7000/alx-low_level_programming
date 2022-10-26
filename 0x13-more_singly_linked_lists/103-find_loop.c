#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 * a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: 0
 * Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *chelsea, *manu;

	if (head == NULL || head->next == NULL)
		return (NULL);

	chelsea = head->next;
	manu = (head->next)->next;

	while (manu)
	{
		if (manu == chelsea)
		{
			manu = head;

			while (manu != chelsea)
			{
				manu = manu->next;
				chelsea = chelsea->next;
			}

			return (manu);
		}

		manu = manu->next;
		chelsea = (chelsea->next)->next;
	}

	return (NULL);
}

