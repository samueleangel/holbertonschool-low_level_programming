#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t lsit.
 * @h: Pointer to the first node of the list.
 *
 * Return: The number of nodes printed.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h ->len, h->str);

		/*Advance to next module*/
		h = h->next;
		count++;
	}

	return count;
}
