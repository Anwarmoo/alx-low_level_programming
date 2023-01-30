#include <stdlib.h>
#include "lists.h"

/**
* free_list - frees a linked list
* @head: the head of list
*
* Description: this function free a list.
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
