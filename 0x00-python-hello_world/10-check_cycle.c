#include  "lists.h"
#include <stdio.h>
/**
 * check_cycle - checks if a singly linked list  has a cycle in it 
 * @list ; linked list to be checked
 * Return : 0 if it has cycle & 1 if not 
 */
int check_cycle(listint_t *list)
{
        listint_t *head = list;
        listint_t *node  =  list;

        while(head && node && node->next)
        {
                head = head->next;      
                node = node->next->next;    
                if (head  == node)
		{
			return (0);
		}
	}
		printf("No loop in linked list\n");
return (0);
}
