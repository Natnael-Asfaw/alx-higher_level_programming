#include "lists.h"

/**
 * check_cycle - a function in C that checks if a singly linked
 * list has a cycle in it.
 *
 * Return: 1 if the list has a cycle, 0 if it doesn't
 */
int check_cycle(listint_t *list)
{
listint_t *slow = list;
listint_t *fast = list;
if (!list)
return (0);
while (slow && fast && fast->next)
{
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
return (1);
}
return (0);
}


