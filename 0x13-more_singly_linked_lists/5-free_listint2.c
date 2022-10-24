
lroudge
/
holbertonschool-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
holbertonschool-low_level_programming/0x12-more_singly_linked_lists/5-free_listint2.c
@lroudge
lroudge Add a condition in 5
 1 contributor
22 lines (18 sloc)  301 Bytes
#include "lists.h"

/**
* free_listint2 - frees a linked list
* @head: pointer to the listint_t list to be freed
*/
void free_listint2(listint_t **head)
{
listint_t *temp;

if (head == NULL)
return;

while (*head)
{
temp = (*head)->next;
free(*head);
*head = temp;
}

*head = NULL;
}
